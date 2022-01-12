#include <iostream>
#include <cstdio>
#include <conio.h>
#include "playfield.h"
using namespace std;

bool gameOver;
int x, y, fruitX, fruitY, score;
enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;

void input();

//============ main program =============
int main()
{

    printfield();

    system("pause");
    return 0;
}

//========= Function Definition =========
//void input()
//{
// char input;
// std::cin >> input;
// if (input == "w"){
//   if (dir == UP){}
//   else dir == UP;
// }
//
// if (input == "a"){
//   if (dir == LEFT){}
//   else dir == LEFT;
// }
//
// if (input == "s"){
//   if (dir == DOWN){}
//   else dir == DOWN;
// }
//
// if (input == "d"){
//   if (dir == RIGHT){}
//   else dir == RIGHT;
// }
//}

