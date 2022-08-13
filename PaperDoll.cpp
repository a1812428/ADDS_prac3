#include "PaperDoll.h"
#include <iostream>
using namespace std;

PaperDoll::PaperDoll()
{
    char moves[3] = {'P', 'S', 'S'};
    this->move = moves[count];
    this->count++;
}