#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include "list.h"

void append(struct Node** n, char w[100])
{
	struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
	struct Node *last = *n;
	strncpy(temp->word, w, 100);
	temp->next = NULL;
	if(*n == NULL)
	{
		temp->prev = NULL;
		*n = temp;
		return;
	}
	while(last->next != NULL)
	{
		last = last->next;
	}
	last->next = temp;
	temp->prev = last;
	return;
}

void output(struct Node** n)
{
	printf("Outputting in reverse order:\n");
	struct Node *last = *n;
	while(last->next != NULL)
	{
		last = last->next;
	}
	while(last->prev != NULL)
	{
		printf("%s", last->word);
		printf("\n");
		last = last->prev;
	}
	return;
}
