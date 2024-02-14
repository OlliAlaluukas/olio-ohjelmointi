#include "kerrostalo.h"
#include <iostream>
using namespace std;
Kerrostalo::Kerrostalo()
{
    eka = new Katutaso();
    toka = new Kerros();
    kolmas = new Kerros();
    cout << "Maaritellaan koko kerrostalon kaikki asunnot" << endl;
    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
}

Kerrostalo::~Kerrostalo()
{
    delete eka;
    delete toka;
    delete kolmas;

}

double Kerrostalo::laskeKulutus(double c)
{
    double kulutus = eka->laskeKulutus(c) + toka->laskeKulutus(c) + kolmas->laskeKulutus(c);
    return kulutus;
}
