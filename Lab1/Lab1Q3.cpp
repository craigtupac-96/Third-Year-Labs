/*
	Author: Craig Lawlor
	C00184465
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int num1, num2, sum;

	cout << "Enter the first number" << endl;
	cin >> num1;

	cout << "Enter the second number" << endl;
	cin >> num2;

	sum = num1 + num2;

	cout << num1 << " + " << num2 << " = " << sum << endl;

	system("pause");
	return 0;
}

