#include "Computer.h"
#include <iostream>
using namespace std;

Computer::Computer() : Player()
{
    this->move = 'R';
}

char Computer::makeMove()
{
    return this->move;
}