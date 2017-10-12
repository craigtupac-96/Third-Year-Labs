/*
Author: Craig Lawlor
C00184465
Description: A program to input a string, count and output the number of legitimate words
			 <string> is not allowed
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

const int length = 50;

int main()
{
	char theString[length];
	int wordCount = 0;
	int lastSpace = 0;
	int curSpace = 0;
	int numChars = 0;
	int charCount;
	int alphaChar;
	bool stay = true;

	cout << "Enter the string" << endl;
	cin.getline(theString, length);

	for (int i = 0; theString[i] != '\0'; i++) {
		cout << theString[i];
		numChars++;
	}

	int i = 0;
	while (stay) {
		charCount = 0;
		alphaChar = 0;
		if (theString[curSpace] == ' ' || theString[curSpace] == '\0') {
			for (int j = lastSpace; j < curSpace; j++) {
				if ((theString[j] >= 'A' && theString[j] <= 'Z') || (theString[j] >= 'a' && theString[j] <= 'z')) {
					alphaChar++;
				}
				charCount++;
			}
			if (alphaChar == charCount && charCount != 0) {
				wordCount++;
			}
			lastSpace = curSpace+1;
		}
		curSpace++;
		if (curSpace > numChars) {
			stay = false;
		}
		i++;
	}
	cout << endl;
	cout << wordCount << endl;

	system("pause");
    return 0;
}