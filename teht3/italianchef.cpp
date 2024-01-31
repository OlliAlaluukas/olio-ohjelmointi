#include "italianchef.h"


ItalianChef::ItalianChef (string a,int b,int c) : Chef(a)
{
    name = a;
    jauhot = b;
    vesi = c;
    cout << "Chef " << name << " konstruktori" << endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout << "Chef " << name << " makes pasta with special recipe" << endl;
    cout << "Chef " << name << " uses jauhot = " << jauhot << endl;
    cout << "Chef " << name << " uses vesi = " << vesi << endl;
}
