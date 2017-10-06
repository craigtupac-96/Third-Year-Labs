/*
	Author: Craig Lawlor
	C00184465
	Description: A program to output a number entered by the user
*/
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	int userInput;

	cout << "Enter a number" << endl;
	cin >> userInput;

	cout << "The number entered was " << userInput << endl;

	system("pause");
	return 0;
}

