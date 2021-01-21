#include <iostream>
using namespace std;

void higherOrLower(){
		int random, input, chances;
	bool game = true;
	char answer = 'y';

	while(game != false){
		chances = 0; 

			cout << "Hello, you have seven tries to guess a number between 1 and 100 that I will "
				 << "generate. Let's begin." << endl;
			  
			random = rand() % 100 + 1;

			cout << "\nPlease enter your guess between 1 and 100." << endl;

		while (chances != 7){
			cin >> input; 
				if (input < random){
					cout << "\nToo low." << endl;
					chances++;
				}
				else if (input > random){
					cout << "\nToo high." << endl;
					chances++;
				}
				if (input == random) {
					cout << "You guessed the number correctly!" << endl
						 << "Number of tries: " << chances << endl
						 << "Your number: " << input << endl
						 << "My number: " << random << endl
						 << "Play again? y/n" << endl;
					cin >> answer;
					if (answer == 'y')
					{
						break;
					}
					else if (answer == 'n'){
						cout << "Goodbye." << endl;
						game = false;
						break;
					}
						 break;
				}

				if (chances == 7){
					cout << "You didn't figure out my number in time." << endl
						 << "The number is " << random << "." << endl << endl
						 << "Play again? y/n" << endl;
					cin >> answer;
					if (answer == 'y')
					{
						break;
					}
					else if (answer == 'n'){
						cout << "Goodbye." << endl;
						game = false;
						break;
					}
				}
			}// end while
	}// end first layer while
}

void headsOrTails(){
	// true = heads, false = tails
	bool coin = true, game = true; 
	int a, random;

	while (game != false){
		random = rand() % 100 + 50;

		
	}


	
}


int main(){
	higherOrLower();
	system("pause");
	return 0;
}
