#pragma once

class SimpleString
{
public:
	int numofCharacters;
	char *characters;
	//create memory for characters and copy the str array 
	//SimpleString(int t_numofCharacters, char str[]);
	SimpleString(int t_numofCharacters, char str[]);

	SimpleString();


	~SimpleString();

	bool isEqual(const SimpleString &d);

};
