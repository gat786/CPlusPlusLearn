// CPlusPlusLearn.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SecretGuesser.cpp"

using namespace std;

int main()
{
    SecretGuesser guesser = SecretGuesser();
    guesser.playTheGame();
}
