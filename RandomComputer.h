#include "Player.h"
#ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H

class RandomComputer : public Player
{
public:
    RandomComputer();
    char makeMove();
};

#endif