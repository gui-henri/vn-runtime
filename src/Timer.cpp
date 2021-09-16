#include "Timer.hpp"

Timer::Timer()
{
    startTime = 0;
    endTime = 0;
    lastTimeInterval = 0;
    isRunning = false;
}

void Timer::startTimer()
{
    if (isRunning)
    {
        std::cout << "startTimer() was called but it's already running." << std::endl;
        return;
    }
    
    startTime = SDL_GetTicks();
    isRunning = true;
}

void Timer::endTimer() 
{
    if (!isRunning)
    {
        std::cout << "endTimer() was called but no Timer is running." << std::endl;
        return;
    }
    
    endTime = SDL_GetTicks();
    isRunning = false;
    lastTimeInterval = endTime - startTime;
}

int Timer::getLastTimeInterval(TimeUnit unit)
{
    if (unit == SECONDS)
    {
        int timeIntervalInSeconds = lastTimeInterval / 1000;
        return timeIntervalInSeconds;
    }
    return lastTimeInterval;
}