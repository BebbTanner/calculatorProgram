/*Calculator program

This program will use a switch case and a seris of functions to allow the user to 
do some basic math functions

TODO:
Add one to each to tell the user that they have to enter and number. - FINISHED
Add one to the Division function to tell the user that they cannot divide by 0. - FINISHED
Create a loop that will keep asking the user for a input if they have not entered a valid number - FINISHED
Take the cout statments in the beginig of int main and put it into and intro function. - FINISHED
Add a feature that allows the user to restart the program if they would like.

Add the exception handling to all of the mathematical functions:
	Multiplication - FINSHED
	Division
	Addition - FINISHED
	Subtraction - FINISED

NOTES:
	I can check to see if the user enters the correct data type by using an if statement. 
	It would like like this: if(!cin).

	The cin.clear() should be used to clear the saved input of the previous variable.

	I believe the cin.ignore is used to ignore the characters that were also in the previous string?
*/
#include <iostream>
#include <cstdlib>
#include <string>

void introduction();

void Multiplication();

void Division();

void Addition();

void Subtraction();

int main() {
	using namespace std;
	introduction();

	char Choice;
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

}

void introduction() {
	using namespace std;
	cout << "Welcome, what would you like to do?: " << endl;
	cout << "A for addition." << endl;
	cout << "S for subtraction." << endl;
	cout << "M for multiplication" << endl;
	cout << "D for division." << endl;

}

/*This function is going to ask the user for 2 variables labeled x and y.
It will then multiply those 2 numbers and print it out on the screen.

This function is finished.*/
void Multiplication() {
	using namespace std;
	int x = 0, y = 0;

	/*This while statement is going to check and see if the input that the user entered
	is a number.*/
	while (true) {
		cout << "Please enter your x value: " << endl;
		cin >> x;

		/*The !cin will take the previously entered input and check to be sure that the 
		data type matches the one of the declared variable. If it is not it will use the 
		cin.clear to clear what was previously stored. cin.ignore will ignore the previous input 
		that the user entered. This is also used for the y input value.*/
		if (!cin) {
			cout << "This is not a valid input." << endl;
			cin.clear(x);
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else {
			break;
		}

	}

	while (true) {
		cout << "Please enter your y value: " << endl;
		cin >> y;


		if (!cin) {
			cout << "This is not a valid input." << endl;
			cin.clear(y);
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else {
			break;
		}

	}

	cout << "The answer is: " << x * y << endl;
}

/*This function is going to ask the user for 2 variables labeled x and y.
It will then divide those 2 numbers and print it out on the screen.

This function is having issues with the clear command. It is throwing 
an E08308 error. It states that there is more than one instance of
the overloaded function. Not sure why it is doing this considering 
that this error is not being thrown with any of the other functions.*/
void Division() {
	using namespace std;
	double x, y;

	while (true) {
		cout << "Please enter your x value: " << endl;
		cin >> x;

		if (!cin) {
			cout << "This is not a valid input." << endl;
			cin.clear(x);
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else {
			break;
		}
	}

	while (true) {
		cout << "Please enter your y value: " << endl;
		cin >> y;

		if (!cin || y == 0) {
			cout << "This is not a valid input!" << endl;
			cin.clear(y);
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else {
			break;
		}
	}


	double divSolution = x / y;

	cout << "The answer is: " << divSolution << endl;
}

/*This function is going to ask the user for 2 variables labeled x and y.
It will then add those 2 numbers and print it out on the screen.

This function is finished.*/
void Addition() {
	using namespace std;
	int x, y;

	while (true) {
		cout << "Please enter your x value: " << endl;
		cin >> x;

		if (!cin) {
			cout << "This is not a valid input." << endl;
			cin.clear(x);
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else {
			break;
		}

	}

	while (true) {
		cout << "Please enter your y value: " << endl;
		cin >> y;

		if (!cin) {
			cout << "This is not a valid input." << endl;
			cin.clear(y);
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else {
			break;
		}

	}

	int addSolution = x + y;

	cout << "The answer is: " << addSolution << endl;
}

/*This function is going to ask the user for 2 variables labeled x and y.
It will then subtract those 2 numbers and print it out on the screen.

This function is finished.*/
void Subtraction() {
	using namespace std;
	int x, y;

	while (true) {
		cout << "Please enter your x value: " << endl;
		cin >> x;

		if (!cin) {
			cout << "This is not a valid input." << endl;
			cin.clear(x);
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else {
			break;
		}

	}

	while (true) {
		cout << "Please enter your y value: " << endl;
		cin >> y;

		if (!cin) {
			cout << "This is not a valid input." << endl;
			cin.clear(y);
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else {
			break;
		}

	}

	int subSolution = x - y;

	cout << "The answer is: " << subSolution << endl;
}