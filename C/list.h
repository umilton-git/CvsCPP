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

typedef struct Node{
	struct Node *next;
	struct Node *prev;
	char word[100]; 
} Node;

extern void append(struct Node** n, char w[100]);

#endif
