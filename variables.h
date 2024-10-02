#ifndef VARIABLES_H
#define VARIABLES_H
#include <SDL_render.h>
#include <SDL_video.h>
#include "structs.h"

// Definicije za game logiku
#define PLAYER_SPEED          4
#define PLAYER_BULLET_SPEED   16

//Dimenzije
const int SCREEN_WIDTH = 1280;
const int SCREEN_HEIGHT = 720;

//The window we'll be rendering to
inline SDL_Window* gWindow = NULL;

//The window renderer
inline SDL_Renderer* gRenderer = NULL;

//Scene textures
inline LTexture gSpaceship;
inline LTexture gBullet;

inline Entity *player;
inline Entity *bullet;

inline App app;
inline Stage stage;

#endif

