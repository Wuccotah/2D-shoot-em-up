//
// Created by PC on 9/28/2024.
//

#ifndef DRAW_H
#define DRAW_H
#include <SDL.h>
#include <SDL_image.h>
#include "variables.h"


void prepareScene();
void presentScene();
void blit(SDL_Texture* texture, int x, int y, int w, int h);

void drawPlayer();
void drawBullets();
void draw();


#endif //DRAW_H
