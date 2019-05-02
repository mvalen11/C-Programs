/* Michael Valenzuela  BCS120-002 / 23319
   Prof. Ugurbil
			Homework #4 - Geometry Calculator

Geometry Calculator
1 . Calculate the Area of a Circle
2 . Calculate the Area of a Rectangle
3 . Calculate the Area of a Triang le
4 . Quit
Enter your choice (1-4):
• If the user enters 1, the program should ask for the radius of the circle and
then display its area . Use 3.14159 for 1t.
• If the user enters 2, the program should ask for the length and width of the
rectangle, and then display the rectang le's area.
• If the user enters 3, the program should ask for the length of the triangle's base and
its height, and then display its area.
• If the user enters 4, the program should end.
Input Validation: Decide how the program should handle an illegal input for the
menu choice or a negative value for any of the other inputs.
*/ //   using the switch case
/* -----------------------------------------------------------------------------------------------------------*/
#include <iostream>
#include <cmath>
#include <string> 
using namespace std;

int main() {
	double r = 0, lr= 5, w= 5, lt= 0, h=0;
	string restart;
	int option;
	// Welcome to the Program
	cout << " Hi! Welcome to the Geometry Calculator! " << "\n";
	//Options 
	cout << "Geometry Calculator \n 1.Calculate the Area of a Circle \n 2.Calculate the Area of a Rectangle" <<
		" \n 3.Calculate the Area of a Triangle \n 4.Quit" << endl;
	do {
		cout << " Which shape do you want to find the Area for?: ";
		// Option 1 Circle
		cin >> option;
		switch (option) {
		case 1:
			cout << "Input the radius of the circle: ";
			cin >> r;
			cout << "The area of the circle will be " << (3.14159 * pow(r, 2)) << endl;
			break;
		// Option 2 Rectangle
		case 2:
			cout << "Input the length of the rectangle: ";
			cin >> lr;
			cout << "Input the width of the rectangle: ";
			cin >> w;
			cout << "The are of the rectangle will be " << lr * w << endl;
			break;
		// Option 3 Triangle
		case 3:
			cout << "Input the base of the triangle: ";
			cin >> lt;
			cout << "Input the height of the triangle: ";
			cin >> h;
			cout << "The area of the triangle will be " << (lt * h) / 2 << endl;
			break;
		// Option 4 Quit
		case 4:
			return 0;
			break;
		default:
			cout << "Invalid answer" << endl;
		}
	cout << "Would like to restart? 'Y'/'N':  ";
	cin >> restart;
	} while (restart == "Y");
system("pause");
return 0;
}