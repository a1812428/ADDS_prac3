#include "Player.h"
#ifndef COMPUTER_H
#define COMPUTER_H

class Computer : public Player
{
public:
    Computer();
    char makeMove();
};

#endif