#include "Computer.h"
#include <iostream>
using namespace std;

Computer::Computer()
{
    this->move = 'R';
}

char Computer::makeMove()
{
    return this->move;
}