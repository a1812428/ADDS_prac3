#include "Computer.h"
#ifndef PLAYER_H
#define PLAYER_H

class Player : public Computer
{
public:
    int count = 0;
    Player();
};

#endif