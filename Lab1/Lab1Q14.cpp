/*
	Author: Craig Lawlor
	C00184465
	Description: A program to check if a number is a palindrome or not
*/

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int num, reverseNum = 0, single;
	int theNum;

	cout << "Enter a number" << endl;
	cin >> num;

	theNum = num;

	while (num != 0) {             // stay in the loop while there is a remainder
		single = num % 10;         // getting the last digit in the number each time
		reverseNum = (reverseNum * 10) + single;          // as it is 0 first time the single will be added to the end
														  // then each time the number will be multiplied by 10 and the single digit added
		num /= 10;					 // make the num = to the first digit only
	}

	if (theNum == reverseNum) {
		cout << theNum << " is a palindrome" << endl;
	}
	else {
		cout << theNum << " is NOT a palindrome" << endl;
	}

	system("pause");                   // using this to avoid program closing (alternative to pressing ctrl+F5)
	return 0;
}
