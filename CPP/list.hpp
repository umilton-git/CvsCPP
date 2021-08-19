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
		Node();
		Node(std::string value);
		std::string read();
		std::string word;
		Node* next;
		Node* prev;
};

#endif
