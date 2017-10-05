/*
	Author: Craig Lawlor
	C00184465
*/

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	char alpha;

	cout << "Enter a character" << endl;
	cin >> alpha;
	alpha = toupper(alpha);

	// switch statement
	switch (alpha) {
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
		cout << alpha << " is a vowel" << endl;
		break;
	default:
		cout << alpha << " is a consenant" << endl;
	}

	system("pause");                   // using this to avoid program closing (alternative to pressing ctrl+F5)
	return 0;
}
