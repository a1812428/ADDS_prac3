#include "Toolbox.h"
#include <iostream>
using namespace std;

Toolbox ::Toolbox() : Player()
{
    this->move = 'S';
}

char Toolbox::makeMove()
{
    return this->move;
}