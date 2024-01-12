#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int game(int maxnum);
int main()
{
    int tulos = game(15);
    cout << "Arvausten maara: " << tulos << endl;

    return 0;
}

int game(int maxnum)
{
    int arvaus;
    int guessCount = 0;
    srand(time(NULL));
    int satunnaisluku = 1 + rand() % maxnum;
    cout << "Arvaa luku valilta 1-" << maxnum << endl;
    cin >> arvaus;
    while (arvaus != satunnaisluku){
        if (arvaus < satunnaisluku)
        {
            guessCount++;
            cout << "Luku on suurempi" << endl;
            cin >> arvaus;
        }
        else if (arvaus > satunnaisluku)
        {
            guessCount++;
            cout << "Luku on pienempi" << endl;
            cin >> arvaus;
        }
    }
    cout << "Arvasit oikein!" << endl;
    return guessCount + 1;
}

