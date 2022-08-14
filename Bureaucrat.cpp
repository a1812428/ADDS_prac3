#include "Bureaucrat.h"
#include <iostream>
using namespace std;

Bureaucrat::Bureaucrat() : Player()
{
    this->move = 'P';
}

char Bureaucrat::makeMove()
{
    return this->move;
}