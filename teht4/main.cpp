#include "asunto.h"
#include "katutaso.h"
#include "kerros.h"
#include "kerrostalo.h"

#include <iostream>

using namespace std;

int main()
{
    //Asunto objectA;
    //objectA.maarita(2,100);
    //objectA.laskeKulutus(1);
    //Kerros objectKeA;
    //objectKeA.maaritaAsunnot();
    //Katutaso objectKatuA;
    //objectKatuA.maaritaAsunnot();
    double hinta = 1;
    Kerrostalo objectKerrosA;
    cout << "Kerrostalon kulutus, " << objectKerrosA.laskeKulutus(hinta) << endl;

    return 0;
}
