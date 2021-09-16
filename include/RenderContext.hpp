#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include <vector>
#include "Entity.hpp"

class RenderContext
{
private:
    SDL_Window* window;
    SDL_Renderer* render;
public:
    RenderContext(const char* w_title, const int w_width, const int w_heigh);
    ~RenderContext();
    SDL_Renderer* getRenderer();
    void renderEntities(std::vector<Entity> entities);
};
