/*Calculator program

This program will use a switch case and a seris of functions to allow the user to 
do some basic math functions*/
#include <iostream>
#include <cstdlib>
using namespace std;

void Multiplication();

void Division();

void Addition();

void Subtraction();

int main() {
	int x, y;
	char Choice;

	cout << "Welcome, what would you like to do?: " << endl;
	cout << "Your choices are: " << endl;
	cout << "A for addition." << endl;
	cout << "S for subtraction." << endl;
	cout << "M for multiplication" << endl;
	cout << "D for division." << endl;
	
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

/*The basic structure of this function is complete. I want to add the
feature that prevents users from entering something that is not a number.
I forgot how to do that though, so for now I will leave the if statements in.
I think it should be implemented as a try and catch error, but once again I 
cannot remember.*/
void Multiplication() {
	int x, y;

	cout << "Please enter your x value: " << endl;
	cin >> x;
	//if (x !=) {

	//}
	cout << "Please enter your y value: " << endl;
	cin >> y;
	//if(){

	//}

	int mulSolution = x * y;

	cout << "The answer is: " << mulSolution << endl;
}

/*The basic structure for the division operation. I need to be sure that 
the user does not try and divide by 0. Once again I think I need to be using the 
exception handling for this. I will come back to that later to implement it.*/
void Division() {
	double x, y;

	cout << "Please enter your x value: " << endl;
	cin >> x;

	cout << "Please enter your y value: " << endl;
	cin >> y;

	double divSolution = x / y;

	cout << "The answer is: " << divSolution << endl;
}

void Addition() {

}

void Subtraction() {

}