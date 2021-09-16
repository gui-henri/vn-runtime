#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class Entity
{
private:
    int x;
    int y;
    int w;
    int h;
    SDL_Texture* texture;
public:
    Entity();
    SDL_Texture* getTexture();
    void setTexture(SDL_Renderer* render, const char* tex_path);
};
