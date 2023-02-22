
#include <stdio.h>

typedef struct node {
	int value;
	struct node *next;
} Node;

typedef Node *List; // pointer to first node

int listSum(List l) {
    List current_node = l;
    int sum = 0;
    while (current_node != NULL) {
        sum += current_node->value;
        current_node = current_node->next;
    }
    return sum;
}

int main(void) {


    
    return 0;
}