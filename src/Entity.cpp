#include "Entity.hpp"

Entity::Entity(int p_x, int p_y, int p_w, int p_h):texture(NULL)
{
    x = p_x;
    y = p_y;
    w = p_w;
    h = p_h;
}

SDL_Texture* Entity::getTexture()
{
    return texture;
}
void Entity::setTexture(SDL_Renderer* render, const char* tex_path)
{
    texture = IMG_LoadTexture(render, tex_path);
}

int Entity::getX()
{
    return x;
}
void Entity::setX(int p_x)
{
    x = p_x;
}
int Entity::getY()
{
    return y;
}
void Entity::setY(int p_y)
{
    y = p_y;
}
int Entity::getW()
{
    return w;
}
void Entity::setW(int p_w)
{
    w = p_w;
}
int Entity::getH()
{
    return h;
}
void Entity::setH(int p_h)
{
    h = p_h;
}