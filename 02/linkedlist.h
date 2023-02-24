#include <stdlib.h>
#include <stdio.h>

typedef struct node {
	int data;
	struct node *next;
} Node;

typedef Node *List;

int listLength(List l);
List listDelete(List l, int value);
void printList(List l);