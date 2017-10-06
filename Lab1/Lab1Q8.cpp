/*
	Author: Craig Lawlor
	C00184465
	Description: A program to find the largest number out of 3 numbers
*/

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int num1, num2, num3, largest;

	cout << "Enter the first number" << endl;
	cin >> num1;

	cout << "Enter the second number" << endl;
	cin >> num2;

	cout << "Enter the third number" << endl;
	cin >> num3;

	if (num1 > num2 && num1 > num3) {
		largest = num1;
	}
	else if (num2 > num1 && num2 > num3) {
		largest = num2;
	}
	else {
		largest = num3;
	}

	cout << "Largest: " << largest << endl;

	system("pause");                   // using this to avoid program closing (alternative to pressing ctrl+F5)
	return 0;
}
