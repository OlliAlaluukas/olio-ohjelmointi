#include "kerrostalo.h"
#include <iostream>
using namespace std;
Kerrostalo::Kerrostalo()
{
    cout << "Maaritellaan koko kerrostalon kaikki asunnot" << endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double c)
{
    double kulutus = eka.laskeKulutus(c) + toka.laskeKulutus(c) + kolmas.laskeKulutus(c);
    return kulutus;
}
