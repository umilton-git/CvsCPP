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

std::string Node::read()
{
	return word;
}
