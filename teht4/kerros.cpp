#include "kerros.h"
#include "asunto.h"
#include <iostream>
using namespace std;
Kerros::Kerros()
{
    cout << "Kerros luotu" << endl;
}

void Kerros::maaritaAsunnot()
{
    cout << "Maaritetaan 4 kpl kerroksen asuntoja" << endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
    as3.maarita(2,100);
    as4.maarita(2,100);
}

double Kerros::laskeKulutus(double c)
{
    return (c * as1.asukasMaara * as1.neliot) + (c * as2.asukasMaara * as2.neliot) + (c * as3.asukasMaara * as3.neliot) + (c * as4.asukasMaara * as4.neliot);
}
