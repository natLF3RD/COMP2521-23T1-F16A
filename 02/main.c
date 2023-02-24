#include <stdlib.h>
#include <stdio.h>

#include "linkedlist.h"

int main() {
    Node a =  {
        .data = 5,
        .next = NULL,
    };
    Node b =  {
        .data = 4,
        .next = NULL,
    };
    a.next = &b;
    Node c =  {
        .data = 3,
        .next = NULL,
    };
    b.next = &c;
    Node d =  {
        .data = 9,
        .next = NULL,
    };
    c.next = &d;
    Node e =  {
        .data = 3,
        .next = NULL,
    };
    d.next = &e;

    List list = &a;
    printf("Number of elements: %d\n", listLength(list));
    printList(list);
    list = listDelete(list, 5);
    printList(list);
}