//
// Created by PC on 9/28/2024.
//

#include "draw.h"

void prepareScene()
{
    SDL_SetRenderDrawColor(gRenderer,  96, 128, 255, 255);
    SDL_SetRenderDrawBlendMode( gRenderer, SDL_BLENDMODE_BLEND );
    SDL_RenderClear(gRenderer);
}

static void draw(void)
{
    drawPlayer();

    drawBullets();
}

static void drawPlayer(void)
{
    blit(player->texture, player->x, player->y, 50, 50);
}

static void drawBullets(void)
{
    Entity *b;

    for (b = stage.bulletHead.next ; b != NULL ; b = b->next)
    {
        blit(b->texture, b->x, b->y, 25, 25);
    }
}
void blit(SDL_Texture *texture, int x, int y , int w, int h)
{
    SDL_Rect dest;

    dest.x = x;
    dest.y = y;
    dest.w = w;
    dest.h = h;
    //SDL_QueryTexture(texture,NULL, NULL, &dest.w, &dest.h);

    SDL_RenderCopy(gRenderer, texture, NULL, &dest);
}

void presentScene()
{
    SDL_RenderPresent(gRenderer);
}