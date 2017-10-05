/*
	Author: Craig Lawlor
	C00184465
*/

#include "stdafx.h"
# include <iostream>
using namespace std;

int main()
{
	int num, divisor = 0;
	bool prime = true;

	cout << "Enter a number to check if it is prime" << endl;
	cin >> num;

	for (int index = 2; index < num; index++) {
		if (num % index == 0) {               // checking if the number divided by the index has a remainder
			divisor++;
		}
	}
	if (divisor > 0) {                             // if divisor is > 0 the number can't be prime
		cout << num << " is NOT prime" << endl;
	}
	else {
		cout << num << " is prime" << endl;
	}
	system("pause");
    return 0;
}

