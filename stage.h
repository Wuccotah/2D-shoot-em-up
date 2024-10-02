//
// Created by PC on 10/2/2024.
//

#ifndef STAGE_H
#define STAGE_H
#include "variables.h"
#include "doInput.h"
#include "init.h"
#include "structs.h"
#include "draw.h"

void initStage(void);
static void initPlayer();
void fireBullet();
void doPlayer();
void doBullets();

#endif //STAGE_H
