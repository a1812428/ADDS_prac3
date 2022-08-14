#include "Player.h"
#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

class Bureaucrat : public Player
{
public:
    Bureaucrat();
    char makeMove();
};

#endif