// main.c
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
    list_t *mylist = list_alloc();

    printf("Testing linked list implementation...\n");

    // Adding elements to the front
    list_add_to_front(mylist, 10);
    list_add_to_front(mylist, 20);
    list_add_to_front(mylist, 30);
    list_print(mylist);

    // Adding elements to the back
    list_add_to_back(mylist, 40);
    list_add_to_back(mylist, 50);
    list_print(mylist);

    // Adding at index
    list_add_at_index(mylist, 25, 1);
    list_print(mylist);

    // Remove from the front
    printf("Removed from front: %d\n", list_remove_from_front(mylist));
    list_print(mylist);

    // Remove from the back
    printf("Removed from back: %d\n", list_remove_from_back(mylist));
    list_print(mylist);

    // Remove at index
    printf("Removed from index 2: %d\n", list_remove_at_index(mylist,
