#include "Human.h"
#include <iostream>
using namespace std;

Human::Human() : Player()
{
}

char Human::makeMove()
{
    cin >> this->move;
    return this->move;
}