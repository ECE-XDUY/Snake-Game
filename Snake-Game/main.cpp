#include <iostream>
#include <cstdio>
#include <conio.h>
using namespace std;

bool gameOver;
const int width = 40.0;
const int height = 12.0;
int x, y, fruitX, fruitY, score;
enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;

void input();
void draw();

//============ main program =============
int main()
{

    draw();
    input();

    system("pause");
    return 0;
}

//========= Function Definition =========
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
           cout << " ";
           if (i == y && j == x)
              cout << "O";
           else if (i == fruitY && j == fruitX)
              cout << "F";
        }
        cout << "#\n";
    }
  }
}
