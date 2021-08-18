#include <iostream>
#include "list.cpp"

int main()
{
	std::string input;
	Node* inputNode = new Node;
	while(input != "STOP")
	{
		std::cout << "Enter a word: ";
		std::cin >> input;
		if(input != "STOP" && inputNode == nullptr)
		{
			*inputNode = Node(input);
		}

		else if(input != "STOP")
		{
			inputNode->append(input);
		}

		else 
		{
			break;
		}
	}
	std::cout << "Printing input in reverse." << std::endl;
	std::cout << inputNode->read() << std::endl;
}
