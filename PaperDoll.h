#include "Player.h"
#ifndef PAPERDOLL_H
#define PAPERDOLL_H

class PaperDoll : public Player
{
public:
    PaperDoll();
    char makeMove();
};

#endif