#pragma once
#include <SDL2/SDL.h>
#include "SequenceComposer.hpp"
#include "RenderContext.hpp"
#include "EnviromentController.hpp"
#include "Timer.hpp"
#include "EventHandler.hpp"


class Game
{
private:
    SequenceComposer* sceneComposer;
    RenderContext* renderCtx;
    EnviromentController* env;

    int fpsCap;

public:
    Game(const char* w_title, const int w_width, const int w_heigh);
    ~Game();
    void enterGameLoop();
};

