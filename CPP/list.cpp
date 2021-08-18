#include "list.hpp"

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

void Node::append(std::string value)
{
	Node* temp = new Node(value);
	this->next = temp;
	temp->prev = this;
	return;
}

std::string Node::read()
{
	return word;
}
