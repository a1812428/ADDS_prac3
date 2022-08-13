#include "Computer.h"

#ifndef REFEREE_H
#define REFEREE_H

class Referee
{
public:
    Referee();
    char refGame(Computer *player1, Computer *player2);
};

#endif