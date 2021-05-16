//
// Created by ruxuge on 16.05.2021.
//

#ifndef Game_h
#define Game_h

#include "SDL2/SDL.h"
#include <iostream>


class Game{
public:
    Game();
    ~Game();

    void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);

    bool running();
    void handleEvents();
    void update();
    void render();
    void clean();

private:
    int cnt;
    bool isRunning;
    SDL_Window *window;
    SDL_Renderer *renderer;
};

#endif /* Game_hpp */
