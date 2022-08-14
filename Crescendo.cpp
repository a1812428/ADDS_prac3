#include "Crescendo.h"
#include <iostream>
using namespace std;


Crescendo::Crescendo() : Player()
{
    this->count = 0;
}

char Crescendo::makeMove(){
    char moves[3] = {'P', 'S', 'R'};
    this->move = moves[count];
    this->count++;
    return this->move;
}