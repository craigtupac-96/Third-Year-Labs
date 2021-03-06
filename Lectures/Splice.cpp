/*
Author: Craig Lawlor
C00184465
Description: A program to look at splicing in C++
*/

#include "stdafx.h"
#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> mylist1, mylist2;
	list<int>::iterator it;

	// set some initial values:
	for (int i = 1; i <= 4; ++i)
		mylist1.push_back(i);      // mylist1: 1 2 3 4

	for (int i = 1; i <= 3; ++i)
		mylist2.push_back(i * 10);   // mylist2: 10 20 30

	it = mylist1.begin();
	++it;                         // points to 2

	mylist1.splice(it, mylist2); // mylist1: 1 10 20 30 2 3 4
								 // mylist2 (empty)
								 // "it" still points to 2 (the 5th element)

	if (mylist2.empty()) {
		cout << "mylist2 is empty after first splice" << endl;
	}

	mylist2.splice(mylist2.begin(), mylist1, it);

	// mylist1: 1 10 20 30 3 4
	// mylist2: 2
	// "it" is now invalid.
	it = mylist1.begin();
	it++;
	it++;
	it++;
	// "it" points now to 30

	// from it to end, place in begin
	mylist1.splice(mylist1.begin(), mylist1, it, mylist1.end());
	// mylist1: 30 3 4 1 10 20
	// mylist2: 2

	cout << "mylist1 contains:";
	for (it = mylist1.begin(); it != mylist1.end(); ++it)
		cout << ' ' << *it;
	cout << '\n';

	cout << "mylist2 contains:";
	for (it = mylist2.begin(); it != mylist2.end(); ++it)
		cout << ' ' << *it;
	cout << '\n';


	/*for (int i = 10; i <= 12; ++i)
	{
		mylist1.push_back(i);
	}

	for (int i = 1; i<2; ++i)
	{
		mylist2.push_back(i * 20);
	}

	it = mylist1.begin();
	++it;

	mylist1.splice(it, mylist2);

	mylist2.insert(mylist2.begin(), 23);

	it = mylist1.end();
	--it;

	mylist1.splice(it, mylist2);


	for (auto &i : mylist1)
	{
		std::cout << i << " ";
	}*/


	system("pause");
	return 0;
}

