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
int board[length][length];
int grid[length][length];
int inputArr[inputLength];

void createBoard() {
	for (int i = 1; i < length; i++) {
		for (int j = 1; j < length; j++) {
			grid[i][j] = 0;
		}
	}
}

void readInput(string fileName) {
	ifstream myFile;
	myFile.open(fileName);
	string creaturePositions;

	//while (!myFile.eof()) {
		getline(myFile, creaturePositions);
		//cout << creaturePositions << endl;

		for (int i = 0; i < creaturePositions.length(); ++i) {
			inputArr[i] = creaturePositions.at(i) - '0';   // converting the character to an int
		}
	//}

	myFile.close();
	//cout << creaturePositions << endl;    // TEST
}

void setPosition() {
	int row, col;
	for (int i = 0; i < inputLength; i += 2) {
		row = inputArr[i];
		col = inputArr[i + 1];
		board[row][col] = 1;
	}

	for (int i = 1; i < length; i++) {
		for (int j = 1; j < length; j++) {
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
	
}

void checkRows() {
	for (int row = 1; row < length; row++) {
		int count = 0;
		for (int col = 1; col < length; col++) {
			count += board[row][col];
		}
		if (count > 1) {
			cout << "collision row: " << row << endl;
			for (int i = 1; i < length; i++) {
				if (board[row][i] == 1) {
					board[row][i] = 7;    // 7 is dead
				}
			}
		}
	}
}

void checkCols() {
	for (int col = 1; col< length; col++) {
		int count = 0;
		for (int row = 1; row < length; row++) {
			count += board[row][col];
		}
		if (count > 1 && count != 7) {
			cout << "collision col: " << col << endl;
			for (int i = 1; i < length; i++) {
				if (board[i][col] == 1) {
					board[i][col] = 7;    // 7 is dead
				}
			}
		}
	}
}

bool diagRDown(int row, int col) {
	bool collision = false;
	for (int i = row, j = col; i < length && j < length; i++, j++) {
		if (board[i][j] == 1) {
			board[i][j] = 7;
			collision = true;
		}
	}
	return collision;
}

bool diagLDown(int row, int col) {
	bool collision = false;
	for (int i = row, j = col; i < length && j > 0; i++, j--) {
		if (board[i][j] == 1) {
			board[i][j] = 7;
			collision = true;
		}
	}
	return collision;
}

void checkDiagonals() {
	for (int row = 0; row < length; row++) {
		for (int col = 0; col < length; col++) {
			if (board[row][col] == 1 || board[row][col] == 7) {
				if (diagRDown(row+1, col+1)) {
					board[row][col] = 7;
				}
				if (diagLDown(row+1, col-1)) {
					board[row][col] = 7;
				}
			}
		}
	}
}

int main()
{
	//int count = 1;
	string inputFile = "creatures.txt";

	createBoard();
	readInput(inputFile);
	setPosition();
	cout << endl; // TEST
	checkRows();
	checkCols();
	checkDiagonals();
	cout << endl; // TEST
	for (int i = 1; i < length; i++) {
		for (int j = 1; j < length; j++) {
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
	
	/*
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
	setPosition();*/

	system("pause");
	return 0;
}

