#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

/*
 * Define a node structure.
 */
typedef struct node {
  int value;
  struct node* next_node;
} node_t;

/*
 * Creates a new node from a given value, allocating heap memory for it.
 */
node_t* make_node(int value);

/*
 * Inserts a new value into a given linked list, allocating heap memory for it.
 */
node_t* insert_value(int value, node_t* current_head);

/*
 * Deletes the first value with the given value, deallocating the associated
 * memory.  Sets the "succeeded" flag to 1 if it found and deleted the value, 0
 * otherwise.
 */
node_t* delete_value(int value, node_t* current_head, int* succeeded);

/*
 * Given a pointer to the head, frees the memory associated with an entire list.
 */
void delete_list(node_t* head);

/* Given a pointer to the head, prints all o fthe values in a list. */
void print_singly_linked_list(node_t* head);

#endif
