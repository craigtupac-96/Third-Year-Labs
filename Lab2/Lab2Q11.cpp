/*
Author: Craig Lawlor
C00184465
Description: A program to count the number of duplicates in an array
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

const int length = 12;

int main()
{
	int myArr[] = { 12, 64, 33, 12, 4, 34, 8, 71, 13, 21, 21, 23 };
	int count = 0;

	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			if (myArr[i] == myArr[j] && i != j) {
				count++;
			}
		}
	}
	cout << count << endl;

	system("pause");
    return 0;
}

