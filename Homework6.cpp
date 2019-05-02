/* Michael Valenzuela  BCS120-002 / 23319 /*
   Prof. Ugurbil
			Homework #6 - Shipping Charges & Order Status
-------------------------------------------------------------------------
6. Shipping Charges
The Fast Freight Shipping Company charges the following rates:
Weight of Package (in kilograms)
2 kg or less
Over 2 kg but not more than 6 kg
Over 6 kg but not more than 10 kg
over 10 kg
Rate per 500 Miles Shipped
$3.10
$4.20
$5.30
$6.40
Write a program that asks for the weight of a package and the distance it is to be shipped.
This information should be passed to a calculateCharge function that computes and
returns the shipping charge to be displayed. The main function should loop to handle
multiple packages until a weight of O is entered.
-----------------------------------------------------------------------------------
15. Order Status
The Middletown Wholesale Copper Wire Company sells spools of copper wiring for
$100 each and ships them for $10 apiece. Write a program that displays the status of
an order. It should use two functions. The first function asks for the following data and
stores the input values in reference parameters.
• The number of spools ordered .
• The number of spools in stock.
• Any special shipping and hand ling charges (above the regular $10 rate).
The second function receives as arguments any values needed to compute and display
the following information:
• The number of ordered spools ready to ship from current stock.
• The number of ordered spoo ls on backorder (if the number ordered is greater
than what is in stock).
• Total selling price of the portion ready to ship (the number of spools ready to ship
times $100 ).
• Total shipping and handling charges on the portion ready to ship.
• Total of the order ready to ship.
The shipping and handling parameter in the second function should have the default
argument 10.00 .
*/

/* ----------------------------------------------------------------------------------------------*/

// Number 6. Shipping Charges 


/* //<---- remove this line to run number 6
#include <iostream>
#include <iomanip>
using namespace std;

// Functions prototype

void viewCharge(double&, double&); //Reads the variable
double calculateCharge(double, double); //Changes the variable to charge the client


int main() {
	double weight, distance;

	cout << "Welcome to The Fast Freight Shipping Company" << endl;
	cout << "Below please enter the weight (kg) and the distance (miles) of the package " << endl;
	cout << "Once finished, input the last weight '0'" << endl;
	do {	//Calling viewCharge function
		viewCharge(weight, distance);
		// Calling calculate charge function
		weight, distance = calculateCharge(weight, distance);
	} while (weight != 0);

	system("pause");
	return 0;
}

	// Reads the values

void viewCharge(double &weight1, double &distance1) {
	cout << "weight: ";
	cin >> weight1;
	cout << "distance: ";
	cin >> distance1;
}

 // Calculates the shipping charge

double calculateCharge(double weight2, double distance2) {

	if (weight2 <= 2) {
		cout << "Your charge would be: $" << fixed  << setprecision(2)  << distance2 * .0062 << endl;
	}
	else if (weight2 > 2 && weight2 <= 6) {
		cout << "Your charge would be: $" << fixed  << setprecision(2)  << distance2 * .0084 << endl;
	}
	else if (weight2 > 6 && weight2 <= 10) {
		cout << "Your charge would be: $" << fixed  << setprecision(2)  << distance2 * .0106 << endl;
	}
	else {
		cout << "Your charge would be: $" << fixed  << setprecision(2)  << distance2 * .0128 << endl;
	}

	return 0;
}
/* //<---- remove this line to run number 6

/* ---------------------------------------------------------------------------------------------*/





/* //<---- remove this line to run number 15

// Number 15. Order Status

#include <iostream>
#include <string>
using namespace std;

// Functions prototype

void viewOrder(double&, double&, double&); //Reads the variable
double chargeOrder(double, double, double, double); //Changes the variable to charge the client


int main() {

	string restart;
	double x, y, z, b = 10;

	cout << "Welcome to The Middletown Wholesale Copper Wire Company! \n \n";
	do {
		// Call veiwOrder to input and read variables
		viewOrder(x, y, z);
		// Call chargeOrder to output the amount ther needs to be charged to the client
		chargeOrder(x, y, z, b);
		cout << "Input the wrong number? Do you want to restart? 'Y' / 'N': ";
		cin >> restart;
	} while (restart == "Y" || restart == "y");
	system("pause");
	return 0;
}
// The viewOrder function input the stores data 
void viewOrder(double &ordered, double &stock, double& shipping) {
	cout << "How many spools did you order?: ";
	cin >> ordered;
	cout << endl;
	cout << "How many spools do you have in stock?: ";
	cin >> stock;
	cout << endl;
	cout << "Any special shipping and handling charges (above the regular $10 rate?) if no, type '0': ";
	cin >> shipping;
	cout << endl;
}
// The chargeOrder function calculate the data and charges the client
double chargeOrder(double ordered, double stock, double shipping, double handling) {
	if (stock >= ordered) {
		cout << " The number of spools ready to ship from current stock is: "
			<< ordered << endl;
		cout << " The price of " << ordered << " spools costs: $" << ordered * 100 << endl;

		if (shipping > 10) {
			cout << " Shipping and handling charge is: $" << ordered * shipping << endl;
			cout << " Total: $" << (ordered * 100) + (ordered * shipping) << endl;
		}
		else {
			cout << " Shipping and handling charge is: $" << (ordered * handling) << endl;
			cout << " Total: $" << (ordered * 100) + (ordered * handling) << endl;
		}
	}
	else if (stock < ordered) {
		cout << " The number of ordered spools on backorder: "
			<< ordered - stock << endl;
		cout << " The price of " << stock << " spools costs: $" << stock * 100 << endl;

		if (shipping > 10) {
			cout << " Shipping and handling charge is: $" << stock * shipping << endl;
			cout << " Total: $" << (stock * 100) + (stock * shipping) << endl;
		}
		else {
			cout << " Shipping and handling charge is: $" << (stock * handling) << endl;
			cout << " Total: $" << (stock * 100) + (stock * handling) << endl;
		}
	}
	else;
	
	return 0;
}
*/ //<---- remove this line to run number 15