/*
	Author: Craig Lawlor
	C00184465
*/

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int num;

	cout << "Enter a number" << endl;
	cin >> num;

	if (num % 2 == 0) {
		cout << num << " is even" << endl;
	}
	else {
		cout << num << " is odd" << endl;
	}

	system("pause");                   // using this to avoid program closing (alternative to pressing ctrl+F5)
	return 0;
}

