/*
Student Name: Ulysses Milton

Student NetID: Ucm6

Compiler Used: GCC

Program Description:
Reads strings from doubly linked list until "STOP" is read, then displays in reverse.
*/

#ifndef LIST_H
#define LIST_H

#include <malloc.h>

// The node structure
typedef struct Node{
	struct Node *next;
	struct Node *prev;
	char word[100]; 
} Node;

// Function for appending a new node
extern void append(struct Node** n, char w[100]);

// Function for outputting in reverse
extern void output(struct Node** n);

// Function to free allocated data in the linked list
extern void freeList(struct Node* n);

#endif
