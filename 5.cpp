/* Michael Valenzuela  BCS120-002 / 23319 /* 
-----------------------------------------------------------------------------------------------------------*/
#include <iostream>
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
/***************************
	Reads the values
****************************/
void viewCharge(double &weight1, double &distance1) {
	cout << "weight: ";
	cin >> weight1;
	cout << "distance: ";
	cin >> distance1;
}
/*****************************
Calculates the shipping charge 
******************************/
double calculateCharge(double weight2 , double distance2 ) {
	
	if (weight2 <= 2) {
		cout << "Your charge would be: $" << distance2 * .0062  << endl;
	}
	else if (weight2 > 2 && weight2 <= 6) {
		cout << "Your charge would be: $" << distance2 * .0084 << endl;
	}
	else if (weight2 > 6 && weight2 <= 10) {
		cout << "Your charge would be: $" << distance2 * .0106 << endl;
	}
	else {
		cout << "Your charge would be: $" << distance2 * .0128 << endl;
	}

	return 0;
}