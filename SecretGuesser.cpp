#include "SecretGuesser.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

class SecretGuesser
{

    /*
    driver code :-
    SecretGuesser guesser = SecretGuesser();
    guesser.playTheGame();
    */

	int secret;
	public:

		SecretGuesser() {
			this->secret = rand() % 100;
		};

		SecretGuesser(int secret) {
			this->secret = secret;
		}

		bool checkGuess(int guess) {
			return true ? guess == secret : false;
		}

		void playTheGame() {
			cout << "Welcome to the guessing game. To start guess a number between 1 - 100 " << endl;

			int max_guesses = 5;
			bool isGuessed = false;
			while (max_guesses > 0 && !isGuessed) {
				int num;
				cout << "\n Enter your guess \t";
				cin >> num;
				isGuessed = checkGuess(num);
				max_guesses--;
			}

			if (isGuessed) {
				cout << "You have guessed the correct anwer " << endl;
			}
			else {
				cout << "You failed to guess the correct number" << endl;
				cout << "Better luck next time" << endl;
				cout << "Correct number was " << this->secret << endl;
			}
		}

};
