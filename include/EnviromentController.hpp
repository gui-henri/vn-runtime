#pragma once
#include <iostream>
#include <SDL2/SDL.h>
class EnviromentController
{
private:
    bool gameRunning;
public:
    EnviromentController();

    bool getGameRunning();
    void handleQuitEvent();
};
