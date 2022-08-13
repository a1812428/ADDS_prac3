#include "Referee.h"
#include <iostream>
using namespace std;

Referee::Referee()
{
}

char Referee::refGame(Computer *player1, Computer *player2)
{
    char ans;
    cin >> player1->move;
    if ((player1->move == 'R' && player2->move == 'R') || (player1->move == 'S' && player2->move == 'S') || (player1->move == 'P' && player2->move == 'P'))
    {
        ans = 'T';
    }
    else if ((player1->move == 'R' && player2->move == 'S') || (player1->move == 'S' && player2->move == 'P') || (player1->move == 'P' && player2->move == 'R'))
    {
        ans = 'W';
    }
    else
    {
        ans = 'L';
    }
    return ans;
}