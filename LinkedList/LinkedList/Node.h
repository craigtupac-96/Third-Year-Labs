#pragma once
#include "SimpleString.h"


class Node
{
public:
	const SimpleString *data;
	Node *next;
	Node(const SimpleString &d, Node *n = 0);
};
