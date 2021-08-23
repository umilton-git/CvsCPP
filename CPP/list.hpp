/*
Student Name: Ulysses Milton

Student NetID: Ucm6

Compiler Used: GCC

Program Description:
Reads strings from doubly linked list until "STOP" is read, then displays in reverse.
*/

#ifndef LIST_H
#define LIST_H

#include <string>

class Node
{
	public:
		// Initializer
		Node();

		// Initializer w/ Input
		Node(std::string value);

		// Read string from current node
		std::string read();

		// Word in current node
		std::string word;

		// Next Node
		Node* next;

		// Previous Node
		Node* prev;
};

#endif
