#pragma once
#include <SDL2/SDL.h>

class Entity
{
private:
    int x;
    int y;
    int w;
    int h;
    SDL_Texture* texture;
public:
    Entity(/* args */);
    ~Entity();
};
