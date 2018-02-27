/*
Author: Craig Lawlor
C00184465
Description: A program to output *'s in increasing order then decreasing using only 2 loops
	*
	**
	***
	****
	***
	**
	*
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{	
	int num = 8;
	int m;

	for (int i = 1; i < num; i++) {
		m = num / 2 - abs(num / 2 - i);    // abs (absolute number) keeps m positve
		for (int j = 0; j < m; j++) {
			cout << '*';
		}
		cout << endl;
	}

	cout << endl;
	// reverse
	for (int i = 1; i < num; i++) {
		m = abs(num / 2 - i);
		for (int j = 0; j <= m; j++) {
			cout << "*";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}

