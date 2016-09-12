#include <cstdlib>
#include <iostream>
#include "singly_linked_list.h"

/* Returns a new node with the given value. */
node_t* make_node(int value) {
  node_t* new_node = (node_t *) malloc(sizeof(node_t));

  if (new_node != NULL) {
    new_node->value = value;
    new_node->next_node = NULL;
  }

  return new_node;
}

/* Insert at the head of a linked list. */
node_t* insert_value(int value, node_t* current_head) {
  node_t* new_head = make_node(value);
  if (new_head != NULL) {
    new_head->next_node = current_head;
  }

  return new_head;
}

/* Deletes the first occurence of value from the list. */
node_t* delete_value(int value, node_t* current_head, int* succeeded) {
  *succeeded = 0;

  /* Special case: if first guy is the one we want to remove. */
  if (current_head == NULL) {
    return NULL;
  } else if (current_head->value == value) {
    node_t* new_head = current_head->next_node;
    free(current_head);
    *succeeded = 1;
    return new_head;
  } else {
    node_t* prev = current_head;
    node_t* current = current_head->next_node;
    while (current != NULL) {
      if (current->value == value) {
        prev->next_node = current->next_node;
        free(current);
        *succeeded = 1;
        return current_head;
      } else {
        current = current->next_node;
      }
    }
  }
  return current_head;
}

/* Frees the memory associated with a linked list. */
void delete_list(node_t* head) {
  node_t* current = head;
  node_t* next;

  while (current != NULL) {
    /* Store our next one. */
    next = current->next_node;

    /* Free the current guy. */
    free(current);

    /* Move on. */
    current = next;
  }
}

/* Prints a linked list. */
void print_singly_linked_list(node_t* head) {
  node_t* current = head;
  while (current != NULL) {
    printf ("%d ", current->value);
    current = current->next_node;
  }
  printf("\n");
  return;
}
