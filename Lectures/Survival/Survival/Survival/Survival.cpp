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
int inputArr[inputLength];

void createBoard() {
	for (int i = 1; i < length; i++) {
		for (int j = 1; j < length; j++) {
			board[i][j] = 0;
		}
	}
}

void setPosition() {
	for (int i = 0; i < inputLength; i += 2) {
		if (board[inputArr[i]][inputArr[i + 1]] == 0) {
			board[inputArr[i]][inputArr[i + 1]] = 1;
		}
		else {
			board[inputArr[i]][inputArr[i + 1]] = 7;
		}
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
					board[row][i] = 7;    
				}
			}
		}
	}
}

void checkCols() {
	for (int col = 1; col < length; col++) {
		int count = 0;
		for (int row = 1; row < length; row++) {
			count += board[row][col];
		}
		if (count > 1 && count != 7) {
			cout << "collision col: " << col << endl;
			for (int i = 1; i < length; i++) {
				if (board[i][col] == 1) {
					board[i][col] = 7;    
				}
			}
		}
	}
}

bool diagRDown(int row, int col) {
	bool collision = false;
	for (int i = row, j = col; i < length && j < length; i++, j++) {
		if (board[i][j] > 0) {
			cout << "collision right down: " << endl;
			board[i][j] = 7;
			collision = true;
		}
	}
	return collision;
}

bool diagLDown(int row, int col) {
	bool collision = false;
	for (int i = row, j = col; i < length && j > 0; i++, j--) {
		if (board[i][j] > 0) {
			cout << "collision left down: " << endl;
			board[i][j] = 7;
			collision = true;
		}
	}
	return collision;
}

void checkDiagonals() {
	for (int row = 0; row < length; row++) {
		for (int col = 0; col < length; col++) {
			if (board[row][col] > 0) {
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

void printBoard() {
	for (int i = 1; i < length; i++) {
		for (int j = 1; j < length; j++) {
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

int main()
{
	ifstream myFile;
	myFile.open("creatures.txt");
	string creaturePositions;

	while (!myFile.eof()) {
		getline(myFile, creaturePositions);
		cout << "Positions: " << creaturePositions << endl;
		for (int i = 0; i < creaturePositions.length(); ++i) {
			inputArr[i] = creaturePositions.at(i) - '0';   // converting the character to an int
		}
		createBoard();
		setPosition();
		checkRows();
		checkCols();
		checkDiagonals();
		printBoard();
	}
	myFile.close();
	system("pause");
	return 0;
}

