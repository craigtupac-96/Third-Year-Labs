/*
	Author: Craig Lawlor
	C00184465
	Description: A program to check if a year entered by the user is a leap year
*/

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int year;

	cout << "Enter a year" << endl;
	cin >> year;

	if (year % 100 == 0 && year % 400 != 0) {
		cout << year << " is not a leap year" << endl;
	}
	else if (year % 100 == 0 && year % 400 == 0) {
		cout << year << " is a leap year" << endl;
	}
	else if(year % 4 == 0) {
		cout << year << " is a leap year" << endl;
	}
	else {
		cout << year << " is not a leap year" << endl;
	}

	system("pause");                   // using this to avoid program closing (alternative to pressing ctrl+F5)
	return 0;
}
