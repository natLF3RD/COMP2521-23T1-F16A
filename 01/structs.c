#include <stdio.h>

typedef int Integer;

struct point {
    int x;
    int y;
};
typedef struct point Point;

struct node {
    int value;
    struct node *next;
};
typedef struct node *Node;

int main () {
    printf("Hello\n");
    return 0;
}