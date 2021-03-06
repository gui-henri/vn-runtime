#include <RenderContext.hpp>

RenderContext::RenderContext(const char* w_title, const int w_width, const int w_heigh):window(NULL), render(NULL)
{

    if(SDL_Init(SDL_INIT_EVERYTHING) > 0)
    {
        std::cout<< "Failed to initialize SDL2. Error: " << SDL_GetError() << std::endl;
    }
    if(!IMG_Init(IMG_INIT_PNG))
    {
        std::cout<< "Failed to initialize SDL_image. Error: " << SDL_GetError() << std::endl;
    }


    window = SDL_CreateWindow(w_title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, w_width, w_heigh, SDL_WINDOW_SHOWN);

    if (window == NULL)
    {
        std::cout<< "Failed to create window. Error: " << SDL_GetError() << std::endl;
    }

    render = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    if (render == NULL)
    {
        std::cout<< "Failed to create renderer. Error: " << SDL_GetError() << std::endl;
    }
}

SDL_Renderer* RenderContext::getRenderer()
{
    return render;
}

void RenderContext::renderEntities(std::vector<Entity> entities)
{
    SDL_RenderClear(render);
    for(Entity& p : entities)
    {
        SDL_Rect dest;
        dest.x = p.getX();
        dest.y = p.getY();
        dest.w = p.getW();
        dest.h = p.getH();
        SDL_Texture* tex = p.getTexture();
        SDL_RenderCopy(render, tex, NULL, &dest);
        std::cout << p.getX() << std::endl;
        std::cout << "rendered" << std::endl;
    }
    SDL_RenderPresent(render);
}

RenderContext::~RenderContext()
{
    IMG_Quit();
    SDL_Quit();
}