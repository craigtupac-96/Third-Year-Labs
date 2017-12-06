#include "stdafx.h"
#include "Node.h"
#include <iostream>

Node::Node(const SimpleString &d, Node *n) {
	data = &d;
	next = n;
}
