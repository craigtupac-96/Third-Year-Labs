/*
Author: Craig Lawlor
C00184465
Description: A program to demonstrate friend classes
*/

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Square {
private:
	int side;
public:
	void setSide(int si);
	friend class Rectangle;
};

// member function of Square
void Square::setSide(int si) {
	side = si;
}

class Rectangle {
private:
	int width, height;
public:
	void setWidth(int wid);
	void setHeight(int hei);
	int area();
	void convert(Square sqr);
};

// member functions of Rectangle
void Rectangle::setWidth(int wid) {
	width = wid;
}

void Rectangle::setHeight(int hei) {
	height = hei;
}

int Rectangle::area() {
	return width * height;
}

void Rectangle::convert(Square sqr) {
	width = sqr.side;
	height = sqr.side;
}

int main()
{
	Rectangle r;
	Square s;

	r.setWidth(12);
	r.setHeight(4);
	cout << "Area of Rectangle: " << r.area() << endl;

	s.setSide(8);
	r.convert(s); // friend class allows Square to be converted
	cout << "Area of Square: " << r.area() << endl;

	system("pause");
	return 0;
}

