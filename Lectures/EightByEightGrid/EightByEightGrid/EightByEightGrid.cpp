#include "stdafx.h"
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;

const int length = 9;
const int sideLength = 62;

int main()
{
	sf::RenderWindow window(sf::VideoMode(620, 620), "8x8 Grid");
	sf::RectangleShape squares[length][length];

	for (int i = 1; i < length; i++) {
		for (int j = 1; j < length; j++) {
			squares[i][j].setSize(sf::Vector2f(float(sideLength), float(sideLength)));
			squares[i][j].setFillColor(sf::Color::White);
			squares[i][j].setOutlineThickness(2);
			squares[i][j].setOutlineColor(sf::Color::Black);
			squares[i][j].setPosition(i * sideLength, j * sideLength);
		}
	}

	squares[1][7].setFillColor(sf::Color::Red);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
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

	return 0;
}