/*
Author: Craig Lawlor
C00184465
Description: A program to create a grid for creatures
*/

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int length = 9;
const int inputLength = 16;
int grid[length][length];
int inputArr[inputLength];

void readInput(string fileName) {
	ifstream myFile;
	myFile.open(fileName);
	string creaturePositions;
	int convert = 0;

	getline(myFile, creaturePositions);
	myFile.close();
	//cout << creaturePositions << endl;    // TEST
	for (int i = 0; i < creaturePositions.length(); ++i) {
		convert = creaturePositions.at(i) - '0';   // converting the character to an int
		inputArr[i] = convert;
	}
}

void setPosition() {
	int row, col;
	for (int i = 0; i < inputLength; i += 2) {
		row = inputArr[i];
		col = inputArr[i + 1];
		cout << "Row: " << row << ", Col: " << col << "= " << grid[row][col] << endl; // TEST
	}
}

int main()
{
	int count = 1;
	string inputFile = "creatures.txt";

	/*while (!myFile.eof()) {
		getline(myFile, testOutput);
		cout << testOutput << endl;
	}*/
	readInput(inputFile);
	
	



	
	for (int i = 1; i < length; i++) {
		for (int j = 1; j < length; j++) {
			grid[i][j] = count;
			count++;
		}
	}

	for (int i = 1; i < length; i++) {
		for (int j = 1; j < length; j++) {
			cout << grid[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	setPosition();

	system("pause");
	return 0;
}

