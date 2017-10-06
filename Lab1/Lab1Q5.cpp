/*
	Author: Craig Lawlor
	C00184465
	Description: A program to swap 2 numbers
*/

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int num1, num2, tempNum;

	cout << "Enter the first number" << endl;
	cin >> num1;

	cout << "Enter the second number" << endl;
	cin >> num2;

	cout << "First: " << num1 << " Second: " << num2 << endl;

	tempNum = num1;
	num1 = num2;
	num2 = tempNum;

	cout << "After swap" << endl;
	cout << "First: " << num1 << " Second: " << num2 << endl;

	system("pause");
    return 0;
}

