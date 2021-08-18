#include "Node.h"

Node::Node()
{
	word = "";
	next = nullptr;
	prev = nullptr;
}

Node::Node(std::string value)
{
	word = value;
	next = nullptr;
	prev = nullptr;
}

Node::append(std::string value)
{
	temp = new Node(value);
	this->next = temp;
	temp->prev = this;
}

Node::read()
{
	return this->word;
}
