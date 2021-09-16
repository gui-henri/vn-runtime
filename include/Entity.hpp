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
    Entity(int x, int y, int w, int h);
    SDL_Texture* getTexture();
    void setTexture(SDL_Renderer* render, const char* tex_path);

    int getX();
    void setX(int x);
    int getY();
    void setY(int y);
    int getW();
    void setW(int w);
    int getH();
    void setH(int h);

};
