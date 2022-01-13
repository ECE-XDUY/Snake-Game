#include <iostream>
#include <cstdio>
#include <conio.h>
#include <windows.h>
using namespace std;

bool gameOver;
const int width = 40.0;
const int height = 12.0;
int x, y, fruitX, fruitY, score;
enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;
int tailX[100], tailY[100];
int nTail;

void input();
void draw();
void logic();
void setup();

//============ main program =============
int main()
{
    setup();
    while (!gameOver)
    {
    draw();
    input();
    logic();

    Sleep(10);
    }

    return 0;
}

//========= Function Definition =========
void setup()
{
  gameOver = false;
  dir = STOP;
  x = width / 2;
  y = height / 2;
  fruitX = rand() % width;
  fruitY = rand() % height;
  score = 0;
}

void input()
{
  if (_kbhit())
  {
      switch (_getch())
      {
      case 'a':
         dir = LEFT;
         break;

      case 'd':
         dir = RIGHT;
         break;

      case 'w':
         dir = UP;
         break;

      case 's':
         dir = DOWN;
         break;

      case 'x':
         gameOver = true;
         break;
      }
  }
}

void draw(){
     system("cls");
     for (int i = 0; i < height; i++){

     if (i == 0 || i == height - 1)
    {
        for (int j = 0; j < width; j++)
           cout << "=";
        cout << "\n";
    }
     else
    {
        cout << "#";
        for (int j = 0; j < width - 2; j++)
        {
           if (i == y && j == x)
              cout << "O";
           else if (i == fruitY && j == fruitX)
              cout << "F";
              else cout << " ";
        }
        cout << "#\n";
    }
  }
  cout << "Score: " << score << "\n";
}

void logic()
{
   int prevX = tailX[0];
   int prevY = tailY[0];
   int prev2X, prev2Y;
   for (int i = 1; i < nTail; i++)
   {
       prev2X = tailX[i];
       prev2Y = tailY[i];
       tailX[i] = prevX;
       tailY[i] = prevY;
       prevX = prev2X;
       prevY = prev2Y;
   }
   switch(dir)
   {
    case LEFT:
      x--;
      break;

    case RIGHT:
      x++;
      break;

    case UP:
      y--;
      break;

    case DOWN:
      y++;
      break;
   }
}
