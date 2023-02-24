#include "linkedlist.h"

// 3 rules to remember for recursion:
// 1. End condition (stop)
// 2. Change state (moving towards the end state)
// 3. recursion (call itself)

int listLength(List l) {
	// TODO
	// 1.
	if (l == NULL) 
	 return 0;
	// 2. 
	return listLength(l->next) + 1;
	// return count;
}

List listDelete(List l, int value) {
	// TODO
	// 1.
	
	if (l == NULL) {
		return l;
	}

	if (l->data == value) {
		// "deleting"
		return l->next;
	}

	if  (l->next == NULL) {
		return l;
	}

	if (l->next->data == value) {
		l->next = l->next->next;
		return l;
	}

	listDelete(l->next, value);
	return l;
}

// Not recursive!!! this is an iterative approach.
void printList(List l) {
	Node * curr = l;

	while (curr != NULL) {
		printf(" %d ", curr->data);
		curr = curr->next;
	}
	printf("\n");
}