/*
Author: Craig Lawlor
C00184465
Description: A program to find the second largest element in an array
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

const int length = 10;

int secondLargest(int arr[]) {
	int max = arr[0];
	int secLarge = 0;

	for (int i = 0; i < length; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	for (int i = 0; i < length; i++) {
		if (arr[i] > secLarge && arr[i] < max) {
			secLarge = arr[i];
		}
	}
	return secLarge;
}

int main()
{
	int myArr[length];

	for (int i = 0; i < sizeof(myArr) / sizeof(*myArr); i++) {
		cout << "Enter a number" << endl;
		cin >> myArr[i];
	}
	cout << "Second Largest: " << secondLargest(myArr) << endl;

	system("pause");
	return 0;
}