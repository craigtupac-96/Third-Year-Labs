/*
	Author: Craig Lawlor
	C00184465
*/

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int mult, sum;

	cout << "Enter a number to see it's multiplication table" << endl;
	cin >> mult;

	for (int i = 1; i <= 12; i++) {
		sum = mult * i;

		cout << mult << " x " << i << " = " << sum << endl;
	}

	system("pause");                   // using this to avoid program closing (alternative to pressing ctrl+F5)
	return 0;
}
