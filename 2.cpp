/* Michael Valenzuela  BCS120-002 / 23319
   Prof. Ugurbil
			Homework #3 - Mobile Service Provider

A mobile phone service has three different subscription packages for its customers:

Package A: For $39.99 per month, 450 minutes are provided. Additional
usage costs $0.45 per minute .

Package B: For $59.99 per month, 900 minutes are provided. Additional
usage costs $0.40 per minute .

Package C: For $69.99 per month, unlimited minutes are provided.

Write a program that calculates a customer's monthly bill. It should input customer
name, which package the customer has purchased , and how many minutes were used.
It should then create a bill that includes the input information and the total amount
due. It should also display how much money Package A customers would save if they
purchased package B or C, and how much money package B customers would save if
they purchased package C. If there would be no savings, no message should be printed.
Wherever possible, use named constants instead of numbers .
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	// Declare Variables
	double  minutes_used;
	const float price_A = 39.99;
	const float price_B = 59.99;
	const float price_C = 69.99;
	string customer_name;
	string package;
	string restart;
	// Initial Welcome to the program
	cout << " Welcome to Mike's Mobile Phone Service! \n " <<
		" Please enter your name: ";
	cin >> customer_name;
	// Packages
	cout << "  Hello " << customer_name << "! \n  Down below is our current packages: " <<
		"\n Package A : For $39.99 per month, 450 minutes are provided. Additional usage costs $0.45 per minute. " <<
		"\n Package B : For $59.99 per month, 900 minutes are provided. Additional usage costs $0.40 per minute. " <<
		"\n Package C : For $69.99 per month, unlimited minutes are provided. ";
	do{
	do {
		cout << "\n\nWhich package are you currently using? Type A, B, or C: ";
		cin >> package;
	} while (package != "A" && package != "B" && package != "C" && package != "");
	// Minutes
		cout << "How many minutes have you used this month?: ";
		cin >> minutes_used;
	// /\/\/\ Package B/C=((x-450)*.45)+39.99 to find max number (x)
	const float package_A = ((minutes_used - 450) * .45) + price_A;
	// Package A compared with B
if (package == "A" && minutes_used > 494.44 && minutes_used <516.66) {
		cout << "\nTotal Amount Due: $" << package_A << endl;
		cout << "\nYou can save $" << package_A - price_B << " if you switch to package B";
	}
else if (package == "A" && minutes_used > 516.66) {
		cout << "\nTotal Amount Due: $" << package_A << endl;
		cout << "\nYou can save $" << package_A - price_B << " if you switch to package B";
		cout << "\nYou can save $" << package_A - price_C << " if you switch to package C";
}
	//  Package B compared with C /\/\/\ 69.99=((x-900)*.45)+59.99 to find max number (x)
else if (package == "B" && minutes_used > 922.22) {
	const float package_B = ((minutes_used - 900) * .45) + price_B;
		cout << "\nTotal Amount Due: $" << package_B << endl;
		cout << "\nYou can save $" << package_B - price_C << " if you switch to package C\n";
	}
	// Package B
	else if (package == "B") {
		cout << "\nTotal Amount Due: $" << price_B << endl;
	}
	// Package C
	else if (package == "C") {
		cout << "\nTotal Amount Due: $" << price_C << endl;
	}
	// Package A (A and < 494.44)
	else cout << "\nTotal Amount Due: $" << price_A << endl;

		cout << "\n\nMade a mistake? Type y/n: ";
		cin >> restart;
	} while (restart == "y");
	system("pause");
	return 0;
}
