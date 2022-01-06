#include <iostream>
#include "playfield.h"
#include "constants.h"
using namespace std;

void printfield(){
     for (int i = 0; i < width; i++){

     if (i == 0 || i == width - 1)
    {
        for (int j = 0; j < length; j++)
           cout << "=";
        cout << "\n";
    }
     else
    {
        cout << "||";
        for (int j = 0; j < length - 4; j++)
           cout << " ";
        cout << "||\n";
    }
  }
}

