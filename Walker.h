#pragma once
#define _VS

#ifdef _VS
#include "SDL.h"
#include "SDL2_gfxPrimitives.h"
#include "SDL_image.h"
#else
#include "usr/include/SDL2/SDL.h"
#include "usr/include/SDL2/SDL2_gfxPrimitives.h"
#include "usr/include/SDL2/SDL_image.h"
#endif

class Walker 
{
  int _x, _y;
public:
  Walker(int x, int y);
  void draw(SDL_Renderer* renderer);
  void update();
};
