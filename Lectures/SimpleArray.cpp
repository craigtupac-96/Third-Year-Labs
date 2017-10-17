/*
	Author: Craig Lawlor
	C00184465
	Decription: A simple array with user input
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int myArr[5];

	cout << sizeof(myArr) / sizeof(*myArr) << endl;

	for (int i = 0; i < sizeof(myArr) / sizeof(*myArr); i++) {
		cout << "Enter a number" << endl;
		cin >> myArr[i];
	}

	for (int i = 0; i < sizeof(myArr) / sizeof(*myArr); i++) {
		cout << "I: " << myArr[i] << endl;
	}

	system("pause");
    return 0;
}

