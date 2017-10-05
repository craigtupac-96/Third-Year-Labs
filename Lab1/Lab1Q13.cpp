/*
	Author: Craig Lawlor
	C00184465
*/

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int num1, num2;

	cout << "Enter a number" << endl;
	cin >> num1;

	cout << "Enter a number" << endl;
	cin >> num2;

	cout << num1 << " x " << num2 << " = " << num1 * num2 << endl;

	system("pause");                   // using this to avoid program closing (alternative to pressing ctrl+F5)
	return 0;
}
