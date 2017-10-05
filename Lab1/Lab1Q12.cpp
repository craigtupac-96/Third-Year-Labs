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

	cout << "The ASCII value of " << alpha << " is " << int(alpha) << endl;

	system("pause");                   // using this to avoid program closing (alternative to pressing ctrl+F5)
	return 0;
}
