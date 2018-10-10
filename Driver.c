#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main() {

    printf("Creating node \"foo_zero\" with value of 5...\n");
    struct node * foo_zero = insert_front( 0 , 5 );
    printf("LinkedList:\n");
    print_list( foo_zero );

    printf("Inserting 4 to the front...\n");
    struct node * foo_one = insert_front( foo_zero , 4 );
    printf("LinkedList:\n");
    print_list( foo_one );

    printf("Inserting 3 to the front...\n");
    struct node * foo_two = insert_front( foo_one , 3 );
    printf("LinkedList:\n");
    print_list( foo_two );

    printf("Inserting 2 to the front...\n");
    struct node * foo_three = insert_front( foo_two , 2 );
    printf("LinkedList:\n");
    print_list( foo_three );

    printf("Inserting 1 to the front...\n");
    struct node * foo_four = insert_front( foo_three , 1 );
    printf("LinkedList:\n");
    print_list( foo_four );

    printf("Testing free_list( foo_four )...\n");
    printf("%p", free_list( foo_four ));
    printf("\n");

    printf("Testing free_list( foo_two )...\n");
    printf("%p", free_list( foo_two ));
    printf("\n");

    printf("Testing free_list( foo_zero )...\n");
    printf("%p", free_list( foo_zero ));
    printf("\n");


    return 0;

}
