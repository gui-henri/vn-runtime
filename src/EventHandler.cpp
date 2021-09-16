#include "EventHandler.hpp"

EventHandler::EventHandler(EnviromentController* p_env):env(NULL)
{
    env = p_env;
}

void EventHandler::pollEvent()
{
    SDL_Event e;
    while (SDL_PollEvent(&e))
        {
            if (e.type == SDL_QUIT)
            {
                env->handleQuitEvent();
            }
        }
}
