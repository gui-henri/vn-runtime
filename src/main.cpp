#include "Game.hpp"

int main(int argc, char *args[])
{
    Game game = Game("GAME", 1360, 720);
    game.enterGameLoop();
    return 0;
}