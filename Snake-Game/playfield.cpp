#include <iostream>
#include "playfield.h"
#include "constants.h"
using namespace std;

void printfield(){
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
           cout << " ";
        cout << "#\n";
    }
  }
}

