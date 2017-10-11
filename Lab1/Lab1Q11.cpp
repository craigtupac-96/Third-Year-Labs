/*
	Author: Craig Lawlor
	C00184465
	Description: A program to reverse a number. The number is an int
*/

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int num, reverseNum;

	cout << "Enter a number" << endl;
	cin >> num;

	while (num / 10 != 0) {          // stay in the loop while there is a remainder
		cout << num % 10;            // get the last digit and output it 
		num /= 10;					 // make the num = to the first digit only
	}

	cout << num << endl;             // output the new number

	system("pause");                   // using this to avoid program closing (alternative to pressing ctrl+F5)
	return 0;
}
