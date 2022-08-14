#include "FistfullODollars.h"
#include <iostream>
using namespace std;

FistfullODollars::FistfullODollars() : Player()
{
    this->count = 0;
}

char FistfullODollars::makeMove()
{
    char moves[3] = {'R', 'P', 'P'};
    this->move = moves[this->count];
    this->count++;
    return this->move;
}