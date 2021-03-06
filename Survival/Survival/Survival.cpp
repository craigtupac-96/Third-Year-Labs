/*
Author: Craig Lawlor
C00184465
Description: A program to read in the positions of creatures to an eight by eight grid
The creatures can only survive if they cannot be seen by another creature
Sight lines are along the rows, columns and diagonals. The colour green
represents a creture who is alive. Red represents dead creatures.
*/
#include "stdafx.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int length = 9;
const int sideLength = 62;
const int inputLength = 16;
int board[length][length];
int inputArr[inputLength];
sf::RenderWindow window(sf::VideoMode(620, 620), "Creature Survival");
sf::RectangleShape squares[length][length];

void createBoard() {
	for (int i = 1; i < length; i++) {
		for (int j = 1; j < length; j++) {
			board[i][j] = 0;
		}
	}
	for (int i = 1; i < length; i++) {
		for (int j = 1; j < length; j++) {
			squares[i][j].setSize(sf::Vector2f(float(sideLength), float(sideLength)));
			squares[i][j].setFillColor(sf::Color::White);
			squares[i][j].setOutlineThickness(2);
			squares[i][j].setOutlineColor(sf::Color::Black);
			squares[i][j].setPosition(i * sideLength, j * sideLength);
		}
	}
}

void setPosition() {
	for (int i = 0; i < inputLength; i += 2) {
		if (board[inputArr[i + 1]][inputArr[i]] == 0) {
			board[inputArr[i + 1]][inputArr[i]] = 1;
		}
		else {
			board[inputArr[i + 1]][inputArr[i]] = 7;
			cout << "2 creatures in the same place: " << inputArr[i] << ", " << inputArr[i + 1] << endl;;
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
				if (diagRDown(row + 1, col + 1)) {
					board[row][col] = 7;
				}
				if (diagLDown(row + 1, col - 1)) {
					board[row][col] = 7;
				}
			}
		}
	}
}

void updateColours() {
	for (int i = 1; i < length; i++) {
		for (int j = 1; j < length; j++) {
			if (board[i][j] == 1) {
				squares[i][j].setFillColor(sf::Color::Green);
			}
			else if (board[i][j] == 7) {
				squares[i][j].setFillColor(sf::Color::Red);
			}
		}
	}
}

int main()
{
	ifstream myFile;
	myFile.open("creatures.txt");
	string creaturePositions;
	bool invalid = false;

	createBoard();
	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::KeyPressed) {
				if (event.key.code == sf::Keyboard::Return) {
					getline(myFile, creaturePositions);
					for (int i = 0; i < creaturePositions.length(); ++i) {
						inputArr[i] = creaturePositions.at(i) - '0';   // converting the character to an int
					}
					cout << endl << "Input: " << creaturePositions << endl;
					invalid = false;
					for (int i = 0; i < length; i++) {
						if (inputArr[i] == 0 || inputArr[i] == 9) {
							invalid = true;
							cout << inputArr[i] << " found ";
						}
					}
					if (invalid) {
						cout << "- invalid input" << endl;
					}
					else if (creaturePositions.length() == inputLength) {
						createBoard();
						setPosition();
						checkRows();
						checkCols();
						checkDiagonals();
						updateColours();
					}
					else if (creaturePositions.length() == 0) {
						cout << "No input found" << endl;
						createBoard();
					}
					else {
						cout << "Input string length is incorrect" << endl;
						break;
					}
				}
			}
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();
		for (int i = 1; i < length; i++) {
			for (int j = 1; j < length; j++) {
				window.draw(squares[i][j]);
			}
		}
		window.display();
	}
	myFile.close();
	system("pause");
	return 0;
}