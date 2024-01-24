/*Calculator program

This program will use a switch case and a seris of functions to allow the user to 
do some basic math functions*/
#include <iostream>
using namespace std;

void Multiplication();

void Division();

void Addition();

void Subtraction();

int main() {
	int x, y;
	char Choice;

	cout << "Welcome, what would you like to do?: " << endl;
	cin >> Choice;

	if (Choice == 'A' || Choice == 'a') {
		Addition();
	}
	else if (Choice == 'S' || Choice == 's') {
		Subtraction();
	}
	else if (Choice == 'M' || Choice == 'm') {
		Multiplication();
	}
	else if (Choice == 'D' || Choice == 'd') {
		Division();
	}
	/*My switch case is not working so I am going to try to do 
	this using a nested if-else statement*/
	
	//switch (Choice) {
	//	case('M' || 'm'):
	//		Multiplication();
	//		break;
	//	case('D' || 'd'):
	//		Division();
	//		break;

	//	case('A' || 'a'):
	//		Addition();
	//		break;

	//	case('S' || 's'):
	//		Subtraction();
	//		break;
	//}


}

void Multiplication() {

}

void Division() {

}

void Addition() {

}

void Subtraction() {

}