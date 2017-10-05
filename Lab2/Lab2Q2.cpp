/*
Author: Craig Lawlor
C00184465
Description: A program to print the negative elements of an array
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

const int length = 10;

void printNeg(int arr[]) {
	
	for (int i = 0; i < length; i++) {
		if (arr[i] < 0) {
			cout << "I: " << arr[i] << endl;
		}
	}
}

int main()
{
	int myArr[length];

	for (int i = 0; i < sizeof(myArr) / sizeof(*myArr); i++) {
		cout << "Enter a number" << endl;
		cin >> myArr[i];
	}
	printNeg(myArr);

	system("pause");
	return 0;
}

