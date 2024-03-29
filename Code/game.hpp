#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "interstellar.hpp"
#include "gamemenu.hpp"
#include "gameover.hpp"
#include "gamepause.hpp"
#include "life.hpp"
#include <SDL_mixer.h>
class Game
{
    // Screen dimension constants
    const int SCREEN_WIDTH = 600;
    const int SCREEN_HEIGHT = 750;

    // The window we'll be rendering to
    SDL_Window *gWindow = NULL;

    // The window renderer
    SDL_Renderer *gRenderer = NULL;

    // Current displayed texture
    SDL_Texture *gTexture = NULL;
    // global reference to png image sheets
    SDL_Texture *assets = NULL;
    SDL_Texture *explosions = NULL;
    SDL_Texture *pause = NULL;
    SDL_Texture *over = NULL;
    SDL_Texture *life = NULL;
    SDL_Texture *menu = NULL;
    Mix_Music *bgMusic = NULL;

public:
    bool init();
    bool loadMedia();
    void close();
    SDL_Texture *loadTexture(std::string path);
    void run();
};
