/*
Author: Craig Lawlor
C00184465
Description: A program to find max and min elements in an array
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

const int length = 10;

int findMax(int arr[]) {
	int max = arr[0];

	for (int i = 0; i < length; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int findMin(int arr[]) {
	int min = arr[0];

	for (int i = 0; i < length; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

int main()
{
	int myArr[length];

	for (int i = 0; i < sizeof(myArr) / sizeof(*myArr); i++) {
		cout << "Enter a number" << endl;
		cin >> myArr[i];
	}
	cout << "Max: " << findMax(myArr) << endl;
	cout << "Min: " << findMin(myArr) << endl;

	system("pause");
	return 0;
}