/* Michael Valenzuela  BCS120-002 / 23319 
   Prof. Ugurbil  
			Homework #1 - Sum of Two Numbers
*/
/*
1. Sum of Two Numbers
Write a program that stores the integers 50 and 100 in variables and stores the sum of
these two in a variable named total. Display the total on the screen. 
*/

#include <iostream>
using namespace std;

int main() {
	
	int fifty = 50;
	int hundred = 100;
	int total = fifty + hundred;

	cout << "The sum of " << 50 << " and " << 
		100 << " is equaled to "  << total << "\n";
	system("pause");
	return 0;
}