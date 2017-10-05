/*
	Author: Craig Lawlor
	C00184465
	Description: A program to read in and print 10 elements in an array
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{	
	int myArr[10];
	
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

