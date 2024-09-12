#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
  printf("Removed from index 2: %d\n", list_remove_at_index(mylist, 2));
  list_print(mylist);

  // Check if an element is in the list
  printf("Is 25 in the list? %d\n", list_is_in(mylist, 25));
  printf("Is 50 in the list? %d\n", list_is_in(mylist, 50));

  // Get element at index
  printf("Element at index 2: %d\n", list_get_elem_at(mylist, 2));
  printf("Element at index 0: %d\n", list_get_elem_at(mylist, 0));

  // Get index of an element
  printf("Index of 40: %d\n", list_get_index_of(mylist, 40));
  printf("Index of 10: %d\n", list_get_index_of(mylist, 10));

  // Free the list
  list_free(mylist);

  return 0;
}
