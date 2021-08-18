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
	char[100] word; 
}

extern int append(struct Node *n, char[100] w);

#endif
