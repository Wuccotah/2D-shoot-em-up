//
// Created by PC on 9/28/2024.
//

#ifndef DOINPUT_H
#define DOINPUT_H
#include <SDL.h>
#include "variables.h"

void doInput();
void doKeyDown(SDL_KeyboardEvent *event);
void doKeyUp(SDL_KeyboardEvent *event);

#endif //DOINPUT_H
