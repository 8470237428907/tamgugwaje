#pragma once
#include "Vector2D.h"
#define WIDTH 600
#define HEIGHT 400

class Ball{
public:
  Vector2D *acc;
  Vector2D *vel;
  Vector2D *pos;
  float mass;
  float d;
Ball(float t_x,float t_y,int m_mass){
  acc = new Vector2D(0,0);
  vel = new Vector2D(0,0);
  pos = new Vector2D(t_x,t_y);
  mass = m_mass;
  d = m_mass * 5;
}

void show(SDL_Renderer *renderer){
  filledCircleColor(renderer, pos->getX(), pos->getY(), mass*7, 0xFFFFFF00);
}

void update(){
  *vel += *acc;
  vel->limit(5);
  *pos += *vel;
  *acc *= 0;
  }

void applyForce(Vector2D *force){
  Vector2D f = *force/mass;
  *acc += f;
}

/*void checkWalls() {
  if(pos->getX() > WIDTH){
      pos->setX(WIDTH);
      vel->setX(vel->getX() *= -1);
    }else if(pos->getX() < 0){
      pos->setX(0);
      pos->setX(pos->getX() *= -1);
    }
    if(pos->getY() > HEIGHT){
      pos->setY(HEIGHT);
      pos->setY(vel->getY() *= -1);
    }else if(pos->getY() < 0){
      pos->setY(0);
      pos->setY(pos->getY() *= -1);
  }
  }*/

};