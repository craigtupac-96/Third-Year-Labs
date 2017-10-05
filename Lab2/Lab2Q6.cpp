/*
Author: Craig Lawlor
C00184465
Description: A program to count the total number of odd and even elements in an array 
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

const int length = 10;

int oddEl(int arr[]) {
	int odd = 0;

	for (int i = 0; i < length; i++) {
		if (arr[i] % 2 == 1) {
			odd++;
		}
	}
	return odd;
}

int evenEl(int arr[]) {
	int even = 0;

	for (int i = 0; i < length; i++) {
		if (arr[i] % 2 == 0) {
			even++;
		}
	}
	return even;
}

int main()
{
	int myArr[length];

	for (int i = 0; i < sizeof(myArr) / sizeof(*myArr); i++) {
		cout << "Enter a number" << endl;
		cin >> myArr[i];
	}
	cout << "Total odd elements: " << oddEl(myArr) << endl;
	cout << "Total even elements: " << evenEl(myArr) << endl;

	system("pause");
	return 0;
}