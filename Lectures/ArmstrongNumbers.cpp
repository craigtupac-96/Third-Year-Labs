/*
Author: Craig Lawlor
C00184465
Description: A program to output all 3 digit armstrong numbers between 100 and 999
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int power = 3;  // working on 3 digit numbers 
	int sum;
	int num;

	for (int i = 100; i < 1000; i++) {
		sum = 0;
		num = i;
		while (num != NULL) {
			sum += pow(num % 10, power);
			num /= 10;
		}
		if (sum == i) {
			cout << i << endl;
		}
	}

	system("pause");
	return 0;
}

