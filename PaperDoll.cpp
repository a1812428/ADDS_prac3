#include "PaperDoll.h"
#include <iostream>
using namespace std;

PaperDoll::PaperDoll() : Player()
{
    this->count = 0;
}

char PaperDoll::makeMove()
{
    char moves[3] = {'P', 'S', 'S'};
    this->move = moves[count];
    this->count++;
    return this->move;
}