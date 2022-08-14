#include "RandomComputer.h"
#include <bits/stdc++.h>
using namespace std;

RandomComputer::RandomComputer() : Player()
{
}

char RandomComputer::makeMove()
{
    char moves[3] = {'R', 'P', 'S'};
    srand(time(0));
    int random = rand() % 3;
    this->move = moves[random];
    return this->move;
}