#include <stdlib.h>
#include <stdio.h>

#include "linkedlist.h"

int listLength(List l) {
	int count = 0;
	// TODO

	Node *curr = l;

	while (curr != NULL) {
		++count;
		curr = curr->next;
	}
	return count;
}

List listDelete(List l, int value) {
	Node *curr = l;
	
	if (curr == NULL) {
		return NULL;
	}

	if (curr->data == value) {
		return curr->next;
	}

	while (curr->next != NULL) {
		if (curr->next->data == value) {
			// delete by updating curr's next ptr.
			curr->next = curr->next->next;

			return l;
		}
		curr = curr->next;
	}

	return l;
}

void printList(List l) {
	Node * curr = l;

	while (curr != NULL) {
		printf(" %d ", curr->data);
		curr = curr->next;
	}
	printf("\n");
}