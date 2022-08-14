#include "Referee.h"
#include <iostream>
using namespace std;

Referee::Referee()
{
}

char Referee::refGame(Player *player1, Player *player2)
{
    char ans;
    if ((player1->makeMove() == 'R' && player2->makeMove() == 'R') || (player1->makeMove() == 'S' && player2->makeMove() == 'S') || (player1->makeMove() == 'P' && player2->makeMove() == 'P'))
    {
        ans = 'T';
    }
    else if ((player1->makeMove() == 'R' && player2->makeMove() == 'S') || (player1->makeMove() == 'S' && player2->makeMove() == 'P') || (player1->makeMove() == 'P' && player2->makeMove() == 'R'))
    {
        ans = 'W';
    }
    else
    {
        ans = 'L';
    }
    return ans;
}