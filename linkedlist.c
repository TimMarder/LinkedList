#include <stdio.h>
#include <stdlib.h>

struct node {
    int i;
    struct node *next;
};

void print_list(struct node *front) {

    printf("%d\n", front -> i);
    if (front -> next) {
        print_list(front -> next);
    }

}

struct node * insert_front(struct node *front, int val) {

    struct node *result = malloc( sizeof(struct node) );
    result -> i = val;
    result -> next = front;
    return result;

}

struct node * free_list(struct node *front) {

    if (front -> next) {
        free_list( front -> next);
        free( front );
    }
    return front;

}
