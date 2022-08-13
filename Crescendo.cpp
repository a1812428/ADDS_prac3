#include "Crescendo.h"
#include <iostream>
using namespace std;


Crescendo::Crescendo()
{
    char moves[3] = {'P', 'S', 'R'};
    this->move = moves[count];
    this->count++;
}
