#include "asunto.h"
#include <iostream>
using namespace std;
Asunto::Asunto()
{
    cout << "Asunto luotu" << endl;
}

void Asunto::maarita(int a, int b)
{
    asukasMaara = a;
    neliot = b;
    cout << "Asunto maaritetty asukkaita = " << asukasMaara << " nelioita = " << neliot << endl;
}

double Asunto::laskeKulutus(double c)
{
    double result = c * asukasMaara * neliot;
    cout << "Asunnon kulutus, kun hinta = " << c << " on " << result << endl;
    return result;
}
