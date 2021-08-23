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
}
