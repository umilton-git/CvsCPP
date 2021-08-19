/*
Student Name: Ulysses Milton

Student NetID: Ucm6

Compiler Used: GCC

Program Description:
Reads strings from doubly linked list until "STOP" is read, then displays in reverse.
*/

#include <iostream>
#include "list.cpp"

int main()
{
	std::string input;
	Node* inputNode;
	while(input != "STOP")
	{
		std::cout << "Enter a word: ";
		std::cin >> input;
		if(input != "STOP" && inputNode == nullptr)
		{
			inputNode = new Node(input);
		}

		else if(input != "STOP")
		{
			Node* temp = new Node(input);
			temp->prev = inputNode;
			inputNode->next = temp;
			inputNode = inputNode->next;
		}

		else 
	        {
			break;
		}
	}
	std::cout << "Printing input in reverse." << std::endl;
	while(inputNode->read() != "")
	{

		std::cout << inputNode->read() << std::endl;
		inputNode = inputNode->prev;
	}

	Node *temp = new Node();
	inputNode = inputNode->next;
	while(inputNode->next != nullptr)
	{
		temp = inputNode;
		inputNode = inputNode->next;
		free(temp);
	}
}
