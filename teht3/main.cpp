#include "chef.h"
#include "italianchef.h"

#include <iostream>

using namespace std;

int main()
{
    /*Chef chefObject("Gordon Ramsay");
    chefObject.makeSalad();
    chefObject.makeSoup();
    Chef chefObject2("Anthony Bourdain");
    chefObject2.makeSalad();
    chefObject2.makeSoup();*/
    Chef chefObject3("Jyrki");
    ItalianChef italianChefObject("Mario",250,100);
    chefObject3.makeSalad();
    italianChefObject.makePasta();
    chefObject3.makeSoup();

    return 0;
}
