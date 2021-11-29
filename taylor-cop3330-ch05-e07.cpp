/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Noah Taylor
 */

// Chapter 5 exercise 7

#include <iostream>
#include <cmath>
using namespace std;

// Function declaration
void findRoots(double a, double b, double c);

// Main function
int main()
{
	// Variable declaration
	double a, b, c;

	// Prints program's purpose to user
	cout << "This program finds the real roots of a quadratic equation of the form ax^2 + bx + c = 0\n";
	cout << "=======================================================================================\n\n";

	// Prompts user for the coefficients in the equation they want solved
	cout << "Enter value a: ";
	cin >> a;
	cout << "Enter value b: ";
	cin >> b;
	cout << "Enter value c: ";
	cin >> c;

	// Displays equation with user values
	cout << "\n" << a << "x^2 + " << b << "x + " << c << " = 0" << endl;

	// Calls a function to find the roots, takes in user's coefficients
	findRoots(a, b, c);

	// Hides directory information from console
	system("pause>0");
}

// Function for finding roots of quadratic equation
void findRoots(double a, double b, double c) {

	// Creates double variables for the discriminant and each root
	// Calculates them and assigns value to corresponding variable
	double discriminant = (b * b) - (4 * a * c);
	double root1 = (-b + sqrt(discriminant)) / (2 * a);
	double root2 = (-b - sqrt(discriminant)) / (2 * a);

	// Displays if the equation has imaginary roots
	// Prints roots to user otherwise
	if (discriminant < 0)
		cout << "\nThis equation has no real roots." << endl;
	else {
		cout << "\nx = " << root1;
		cout << "\nx = " << root2 << endl;
	}
}