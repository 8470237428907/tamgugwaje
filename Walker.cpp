#include "Walker.h"
#include <random>
#include "Ball.h"
#define WIDTH 600
#define HEIGHT 400

//const int ballsNum = 4;
//Ball *balls[ballsNum];
  Ball *p = new Ball(50,30,5);
  Ball *p1 = new Ball(200,30,2);

Walker::Walker(int x, int y)
{
  /*for(int i = 0; i<ballsNum;i++)
    {
      balls[i] = new Ball(50,30,20);
    }*/
  

}

void Walker::update() 
{
  

  
  
}

void Walker::draw(SDL_Renderer* renderer)
{
  Vector2D *gravity = new Vector2D(0,0.1);
  p->update();
  p->show(renderer);
  //p->checkWalls();
  p->applyForce(gravity);

  p1->update();
  p1->show(renderer);
  //p1->checkWalls();
  p1->applyForce(gravity);

  //Vector2D *scaledGravity = 
}
