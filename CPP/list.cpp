/*
Student Name: Ulysses Milton

Student NetID: Ucm6

Compiler Used: GCC

Program Description:
Reads strings from doubly linked list until "STOP" is read, then displays in reverse.
*/

#include "list.hpp"

// Initializer
Node::Node()
{
	word = "";
	next = nullptr;
	prev = nullptr;
}

// Initializer w/ value
Node::Node(std::string value)
{
	word = value;
	next = nullptr;
	prev = nullptr;
}

// Returns the word in the current node
std::string Node::read()
{
	return word;
}
