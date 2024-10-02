/*This source code copyrighted by Lazy Foo' Productions 2004-2024
and may not be redistributed without written permission.*/

//Using SDL, SDL_image, standard IO, and strings
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include "variables.h"
#include "init.h"
#include "structs.h"
#include "doInput.h"
#include "draw.h"
#include "stage.h"

int main( int argc, char* args[] )
{
	long then;
	float remainder;

	//define some variables
	memset(&app, 0, sizeof(App));


	//Start up SDL and create window
	if( !init() )
	{
		printf( "Failed to initialize!\n" );
	}
	else
	{
		//Load media
		if( !loadMedia() )
		{
			printf( "Failed to load media!\n" );
		}
		else
		{
			printf("Media Load Complete!\n");

			// main basic things, done after loading, but before core loop
			atexit(close);

			initStage();

			then = SDL_GetTicks();

			remainder = 0;

			//While application is running
			while( 1)
			{

				//Clear screen
				prepareScene();

				//Player movement logic
				doInput();
				if (app.up)
				{
					player->y -= 4;
				}

				if (app.down)
				{
					player->y += 4;
				}

				if (app.left)
				{
					player->x -= 4;
				}

				if (app.right)
				{
					player->x += 4;
				}
				//Render Spaceship in two different ways to the screen
				//gSpaceship.render( 240, 190 );
				// Render bullet and player
				if (app.fire && bullet->health == 0)
				{
					bullet->x = player->x;
					bullet->y = player->y;
					bullet->dx = 16;
					bullet->dy = 0;
					bullet->health = 1;
				}

				bullet->x += bullet->dx;
				bullet->y += bullet->dy;

				if (bullet->x > SCREEN_WIDTH)
				{
					bullet->health = 0;
				}

				blit(player->texture, player->x, player->y, 50, 50);

				if (bullet->health > 0)
				{
					blit(bullet->texture, bullet->x, bullet->y, 25, 25);
				}

				//Update screen
				presentScene();
				SDL_Delay(16);
			}
		}
	}

	//Free resources and close SDL
	close();

	return 0;
}
