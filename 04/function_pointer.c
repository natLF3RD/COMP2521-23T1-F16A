#include <stdlib.h> 
#include <stdio.h> 

typedef int (*FilterFunc)(int);

typedef struct node {
    int value;
    struct node *next;
} * Node;

// List types
typedef struct list {
    Node head;
} * List;

Node listFilterR(Node n, FilterFunc fp) {
    if (!n)
        return NULL;

    // here the criteria is to remove when the passed in fp returns 0.
    // hence the ! operation on the result.
    int delete = !fp(n->value);
    
    Node rest = listFilterR(n->next, fp);
    if (delete) {
        free(n);
        return rest;
    } else {
        n->next = rest;
        return n;
    }
}

void listFilter(List l, FilterFunc fp) {
    l->head = listFilterR(l->head, fp);
}

// Functions to use to pass in.
int filterEvens(int val) {
    printf("calling filterEvens on value %d\n", val);
    return val % 2;
}

int filterGreaterThan10(int val) {
    printf("calling filterGreaterThan10 on value %d\n", val);
    return val > 10;
}

int main() {
    List l = NULL;
    l = (List) malloc(sizeof(struct list));
    l->head = (Node) malloc(sizeof(struct node));
    l->head->value = 14;
    l->head->next = NULL;

    // pass in the address of the functions we made to filter.
    // note their signatures must match our typedef for FilterFunc.
    // (return an int and take one int as an arg)
    listFilter(l, filterEvens);
    listFilter(l, filterGreaterThan10);

}