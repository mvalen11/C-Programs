/* Michael Valenzuela  BCS120-002 / 23319
   Prof. Ugurbil
			Homework #5 - Random Number Guessing Game

12. Random Number Guessing Game
Write a program that generates a random number between 1 and 100 and asks the
user to guess what the number is. If the user's guess is higher than the random
number, the program should display "Too high. Try again ." If the user's guess is
lower than the random number, the program should display "Too low. Try again ."
The program should use a loop that repeats until the user correctly guesses the
random number. Then the program should display "Congratulations. You figured
out my number."

13. Random Number Guessing Game Enhancement
Enhance the program that you wrote for Programming Challenge 12 so it keeps a
count of the number of guesses the user makes. When the user correctly guesses the
random number, the program should display the number of guesses along with the
message of congratulations . 

*/ 
/* -----------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <cmath>
#include <string> 
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	string restart;
	double option, tries;

	// Welcome to the Program
	cout << "Hi! Welcome to the Number Generator! " << endl;
	cout << "Guess a number between 1 and 100 and I would let you know the number is too high, too low, or just right."
		<< "\n" << "\n" << "Let the game begin!" << "\n" <<endl;
	
	do {
			srand(time(0));
			double guess = (rand() % 100) + 1; // The computer can only guess 1 - 100 ONLY
			cout << "Guess: ";
			for (tries = 1; tries <= 50; tries++) {
				
				cin >> option;
				if (guess > option) {
					// Too Low 
					cout << " Too Low" << "\n" << "Guess Again: ";
				}
				else if (guess < option) {
					// Too High
					cout << " Too High" << "\n" << "Guess Again: ";
				}
				else if (guess == option) {
					// Just Right
					cout << "Congratulations! You figured out my number "
						<< "in " << tries << " tries" << endl;
					cout << "Would like to try again? I would pick a different number! 'Y'/'N':  ";
					break;
				}
				else {
					cout << "Invalid Answer"
						<< "Guess: ";
				}
				
			}
	cin >> restart;
	} while (restart == "Y" || restart == "y");
	system("pause");
	return 0;
};