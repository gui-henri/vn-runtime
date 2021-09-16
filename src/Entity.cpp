#include "Entity.hpp"

Entity::Entity():texture(NULL)
{

}

SDL_Texture* Entity::getTexture()
{
    return texture;
}
void Entity::setTexture(SDL_Renderer* render, const char* tex_path)
{
    texture = IMG_LoadTexture(render, tex_path);
}