/*
	Author: Craig Lawlor
*/

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{	
	string ast = "";
	string jst = "";
	int index;

	for (index = 0; index < 4; index++) {
		
		jst += "*";
		cout << jst;
		for (int j = index; j >= 3; j--) {
			cout << endl;
			ast += "*";
		}
		cout << ast << endl;
	}
	system("pause");
    return 0;
}

