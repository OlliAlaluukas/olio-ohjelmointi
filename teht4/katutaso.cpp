#include "katutaso.h"
#include <iostream>
using namespace std;
Katutaso::Katutaso()
{
    cout << "Katutaso luotu" << endl;
}

void Katutaso::maaritaAsunnot()
{

    cout << "Maaritetaan 2 kpl katutason asuntoja" << endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
    cout << "Maaritetaan katutason kerrokselta perittyja asuntoja" << endl;
    Kerros::maaritaAsunnot();
}

double Katutaso::laskeKulutus(double c)
{
    double result = Kerros::laskeKulutus(1) + (as1.asukasMaara * as1.neliot * c) + (as2.asukasMaara * as2.neliot);
    return result;
}
