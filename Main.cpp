#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>
using namespace std;

int main()
{

    Computer c;
    Human h;
    h.makeMove();
    Referee r;
    cout << r.refGame(h, c) << endl;

    return 0;
}