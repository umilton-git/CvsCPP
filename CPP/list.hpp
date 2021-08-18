#ifndef LIST_H
#define LIST_H

#include <string>

class Node
{
	public:
		Node();
		Node(std::string value);
		void append(std::string value);
		std::string read();
		
	private:
		std::string word;
		Node* next;
		Node* prev;
};

#endif
