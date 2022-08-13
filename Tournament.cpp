#include "Tournament.h"
#include "Referee.h"
#include <iostream>
using namespace std;

Computer *Tournament::run(Computer *competetors[8])
{
    Referee *r = new Referee();
    Computer *a;
    Computer *b;
    Computer *c;
    Computer *d;
    for (int i = 0; i < 8; i += 2)
    {
        if (i == 0)
        {
            char ch = r->refGame(competetors[i], competetors[i + 1]);
            if (ch == 'W')
            {
                a = competetors[i];
            }
            else if (ch == 'L')
            {
                a = competetors[i + 1];
            }
            else
            {
                a = competetors[i];
            }
        }
        else if (i == 2)
        {
            char ch = r->refGame(competetors[i], competetors[i + 1]);
            if (ch == 'W')
            {
                b = competetors[i];
            }
            else if (ch == 'L')
            {
                b = competetors[i + 1];
            }
            else
            {
                b = competetors[i];
            }
        }
        else if (i == 4)
        {
            char ch = r->refGame(competetors[i], competetors[i + 1]);
            if (ch == 'W')
            {
                c = competetors[i];
            }
            else if (ch == 'L')
            {
                c = competetors[i + 1];
            }
            else
            {
                c = competetors[i];
            }
        }
        else
        {
            char ch = r->refGame(competetors[i], competetors[i + 1]);
            if (ch == 'W')
            {
                d = competetors[i];
            }
            else if (ch == 'L')
            {
                d = competetors[i + 1];
            }
            else
            {
                d = competetors[i];
            }
        }
    }
    char ch = r->refGame(a, b);
    if (ch == 'W')
    {
        a = a;
    }
    else if (ch == 'L')
    {
        a = b;
    }
    else
    {
        a = a;
    }
    ch = r->refGame(c, d);
    if (ch == 'W')
    {
        b = c;
    }
    else if (ch == 'L')
    {
        b = d;
    }
    else
    {
        b = c;
    }
    char ch = r->refGame(a, b);
    if (ch == 'W')
    {
        a = a;
    }
    else if (ch == 'L')
    {
        a = b;
    }
    else
    {
        a = a;
    }
    return a;
}