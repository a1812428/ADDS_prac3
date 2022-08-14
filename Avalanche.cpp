#include "Avalanche.h"
#include <iostream>
using namespace std;

Player::Player()
{
}

Avalanche::Avalanche() : Player()
{
    this->move = 'R';
}

char Avalanche::makeMove()
{
    return this->move;
}