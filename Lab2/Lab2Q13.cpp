/*
Author: Craig Lawlor
C00184465
Description: A program to left rotate an array, moving the first element to the end
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

const int length = 12;

int main()
{
	int myArr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

	int temp = myArr[0];

	for (int i = 0; i < length; i++) {
		myArr[i] = myArr[i + 1];
	}
	myArr[length - 1] = temp;

	for (int i = 0; i < length; i++) {
		cout << myArr[i] << ", ";
	}

	system("pause");
    return 0;
}

