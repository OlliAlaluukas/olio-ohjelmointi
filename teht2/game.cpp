#include "game.h"
#include <ctime>
#include <iostream>
#include <cstdlib>

using namespace std;

Game::Game(int m)
{
    maxNumber = m;
    cout << "GAME CONSTRUCTOR: object initialized with " << maxNumber << " as a maximum value" << endl;
}

Game::~Game()
{
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}

void Game::play()
{

    srand(time(NULL));
    randomNumber = 1 + rand() % maxNumber;
    cout << "Give your guess between 1-" << maxNumber << endl;
    cin >> playerGuess;
    while (playerGuess != randomNumber){
        if (playerGuess < randomNumber)
        {
            numOfGuesses++;
            cout << "Your guess is too small" << endl;
            cout << "Give your guess between 1-" << maxNumber << endl;
            cin >> playerGuess;
        }
        else if (playerGuess > randomNumber)
        {
            numOfGuesses++;
            cout << "Your guess is too big" << endl;
            cout << "Give your guess between 1-" << maxNumber << endl;
            cin >> playerGuess;
        }
    }
    cout << "Your guess is right = " << randomNumber << endl;
    printGameResult();
}

void Game::printGameResult()
{
    cout << "You guessed the right answer = " << randomNumber << " with " << numOfGuesses + 1 << " guesses" << endl;
}
