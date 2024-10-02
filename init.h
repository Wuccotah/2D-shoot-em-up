//
// Created by PC on 9/28/2024.
//

#ifndef INIT_H
#define INIT_H
#include <SDL.h>
#include <SDL_error.h>
#include <SDL_hints.h>
#include <SDL_image.h>
#include <SDL_render.h>
#include <SDL_video.h>
#include <stdio.h>

bool init();
bool loadMedia();
void close();

#endif //INIT_H
