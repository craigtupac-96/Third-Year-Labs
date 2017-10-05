/*
Author: Craig Lawlor
C00184465
Description: A program to copy the elements of an array to another array
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

const int length = 20;

void copyArray(int arr[], int arr2[]) {

	for (int i = 0; i < length; i++) {
		arr2[i] = arr[i];
	}
	for (int i = 0; i < length; i++) {
		cout << arr2[i] << ", ";
	}
}

int main()
{
	int myArr[length] = { 12, 24, 3, 8, 44, 7, 13, 66, 78, 22, 100, 73, 88, 5, 1, 16, 17, 99, 19, 2 };
	int myArr2[length];

	copyArray(myArr, myArr2);

	system("pause");
	return 0;
}