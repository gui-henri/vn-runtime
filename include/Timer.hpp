#pragma once
#include <SDL2/SDL.h>
#include <iostream>

enum TimeUnit{
    SECONDS,
    MILISECONDS
};

class Timer
{
private:
    unsigned int startTime;
    unsigned int endTime;
    unsigned int lastTimeInterval;
    bool isRunning;
public:
    Timer();
    void startTimer();
    void endTimer();
    int getLastTimeInterval(TimeUnit unit);
};