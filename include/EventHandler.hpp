#pragma once
#include <SDL2/SDL.h>
#include "EnviromentController.hpp"

class EventHandler
{
private:
    EnviromentController* env;
public:
    EventHandler(EnviromentController* p_env);
    void pollEvent();
    void dispatch(SDL_Event *e);
};
