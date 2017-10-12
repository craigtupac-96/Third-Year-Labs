/*
Author: Craig Lawlor
C00184465
Description: A program to reverse an array using only one array
*/
#include "stdafx.h"
#include <iostream>
using namespace std;

const int length = 12;

int main()
{
	int myArr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	int temp ;


	for (int i = 0; i < length / 2; i++) {
		temp = myArr[i];
		myArr[i] = myArr[length -1 - i];
		myArr[length-1 - i] = temp;
	}
	for (int i = 0; i < length; i++) {
		cout << myArr[i] << ", ";
	}

	system("pause");
    return 0;
}