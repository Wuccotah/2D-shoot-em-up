//
// Created by PC on 9/28/2024.
//

#ifndef STRUCTS_H
#define STRUCTS_H

#include <string>
#include <SDL.h>
#include <SDL_image.h>

#define MAX_KEYBOARD_KEYS 350

//Texture wrapper class
class LTexture
{
public:
    //Initializes variables
    LTexture();

    //Deallocates memory
    ~LTexture();

    //Loads image at specified path
    bool loadFromFile( std::string path );

    //Deallocates texture
    void free();

    //Set color modulation
    void setColor( Uint8 red, Uint8 green, Uint8 blue );

    //Set blending
    void setBlendMode( SDL_BlendMode blending );

    //Set alpha modulation
    void setAlpha( Uint8 alpha );

    //Renders texture at given point
    void render( int x, int y );
    SDL_Texture* getTexture();

    //Gets image dimensions
    int getWidth();
    int getHeight();

private:
    //The actual hardware texture
    SDL_Texture* mTexture;

    //Image dimensions
    int mWidth;
    int mHeight;
};

struct Entity {
    int w;
    int h;
    float x;
    float y;
    SDL_Texture* texture;
    float dx;
    float dy;
    int health;
    int reload;
    Entity* next;

};
typedef struct {
    void (*logic)(void);
    void (*draw)(void);
} Delegate;

typedef struct {
    int up = 0;
    int down = 0;
    int left = 0;
    int right = 0;
    int fire = 0;
    Delegate delegate;
    int keyboard[MAX_KEYBOARD_KEYS];
} App;

typedef struct {
    Entity fighterHead, *fighterTail;
    Entity bulletHead, *bulletTail;
} Stage;

#endif //STRUCTS_H
