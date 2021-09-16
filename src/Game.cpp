#include <Game.hpp>

Game::Game(const char* w_title, const int w_width, const int w_heigh):sceneComposer(NULL), renderCtx(NULL), env(NULL), fpsCap(60)
{
    renderCtx = new RenderContext(w_title, w_width, w_heigh);
    sceneComposer = new SequenceComposer();
    env = new EnviromentController();
}

Game::~Game()
{
    renderCtx->~RenderContext();
}
void Game::enterGameLoop()
{
    bool gameRunning = true;
    Timer timer;
    SDL_Texture* texture = IMG_LoadTexture(renderCtx->getRenderer(), "res/images/testsheet.png");

    while (gameRunning)
    {
        timer.startTimer();
        SDL_Event e;
        while (SDL_PollEvent(&e))
        {
            if (e.type == SDL_QUIT)
            {
                gameRunning = false;
            }
        }

        SDL_RenderClear(renderCtx->getRenderer());
        SDL_RenderCopy(renderCtx->getRenderer(), texture, NULL, NULL);
        SDL_RenderPresent(renderCtx->getRenderer());

        timer.endTimer();

        if (timer.getLastTimeInterval(MILISECONDS) < fpsCap)
        {
            SDL_Delay(fpsCap - timer.getLastTimeInterval(MILISECONDS));
        }
    }
}