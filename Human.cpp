#include "Human.h"
#include <iostream>
using namespace std;

Human::Human()
{
}

char Human::makeMove()
{
    cin >> this->move;
    return this->move;
}