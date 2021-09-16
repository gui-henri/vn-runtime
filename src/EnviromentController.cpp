#include "EnviromentController.hpp"

EnviromentController::EnviromentController():gameRunning(true)
{
    
}

bool EnviromentController::getGameRunning()
{
    return gameRunning;
}

void EnviromentController::handleQuitEvent()
{
    gameRunning = false;
}