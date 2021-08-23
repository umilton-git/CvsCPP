/*
Student Name: Ulysses Milton

Student NetID: Ucm6

Compiler Used: GCC

Program Description:
Reads strings from doubly linked list until "STOP" is read, then displays in reverse.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include "list.h"

void append(struct Node** n, char w[100])
{
	// Temp node to hold new data
	struct Node* temp = (struct Node*) malloc(sizeof(struct Node));

	// Pointer for last node in the list before appending
	struct Node *last = *n;
	strncpy(temp->word, w, 100);
	temp->next = NULL;

	// Create data for if the list is currently empty
	if(*n == NULL)
	{
		temp->prev = NULL;
		*n = temp;
		return;
	}

	// Add temp to last node
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
	// Outputs in reverse order
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

void freeList(struct Node* n)
{
	// Frees allocated data from LinkedList
	struct Node* temp;
	while(n != NULL)
	{
		temp = n;
		n = n->next;
		free(temp);
	}
}
