#include "Player.h"
#include<bits/stdc++.h>
#ifndef TOURNAMENT_H
#define TOURNAMENT_H

class Tournament
{
public:
    template <std::size_t N>
    Player *run(std::array<Player *, N> competetors[]);
};

#endif