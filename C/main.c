/*
Student Name: Ulysses Milton

Student NetID: Ucm6

Compiler Used: GCC

Program Description:
Reads strings from doubly linked list until "STOP" is read, then displays in reverse.
*/

#include "list.c"

int main()
{
	char input[100];
	struct Node* linkedlist = (struct Node*) malloc(sizeof(struct Node));
	while(strcmp("STOP",input) != 0)
	{
		printf("Enter a string: ");
		scanf("%s", input);
		if(strcmp("STOP", input) != 0)
		{
		append(&linkedlist, input);
		}
	}
	output(&linkedlist);
	freeList(linkedlist);
}
