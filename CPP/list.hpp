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
