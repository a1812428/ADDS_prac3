#include "Player.h"

#ifndef REFEREE_H
#define REFEREE_H

class Referee
{
public:
    Referee();
    char refGame(Player *player1, Player *player2);
};

#endif