/*
Author: Craig Lawlor
C00184465
Description: A program to count the frequency of each element in an array
*/
#include "stdafx.h"
#include <iostream>
using namespace std;

int const length = 12;

int main()
{
	int myArr[] = { 12, 64, 33, 12, 4, 64, 8, 71, 13, 88, 21, 64 };
	int freq;
	int remove;
	int count = 0;

	for (int i = 0; i < length; i++) {
		freq = 1;
		count = 0;
		for (int j = i + 1; j < length; j++) {
			if (myArr[i] == myArr[j]) {
				freq++;
			}
		}
		cout << myArr[i] << " appears " << freq << " times" << endl;
	}
	system("pause");
	return 0;
}