#include <cstdlib>
#include <iostream>
#include "singly_linked_list.h"

/* Returns a new node with the given value. */
node_t* make_node(int value) {
  node_t* new_node = malloc(sizeof(node_t));

  if (new_node != NULL) {
    new_node->value = value;
    new_node->next = NULL;
  }

  return new_node;
}

/* Insert at the head of a linked list. */
node_t* insert_value(int value, node_t* current_head) {
  node_t* new_head = make_node(value);
  if (new_head != NULL) {
    new_head->next = current_head;
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
    node_t* new_head = current_head->next;
    free(current_head);
    *succeeded = 1;
    return new_head;
  } else {
    node_t* prev = current_head;
    node_t* cur = current_head->next;
    while (cur != NULL) {
      if (cur->value == value) {
        prev->next = cur->next;
        free(cur);
        *succeeded = 1;
        return current_head;
      } else {
        cur = cur->next;
      }
    }
  }
  return current_head;
}

/* Frees the memory associated with a linked list. */
void delete_list(node_t* head) {
  node_t* cur = head;
  node_t* next;

  while (cur != NULL) {
    /* Store our next one. */
    next = cur->next;

    /* Free the current guy. */
    free(cur);

    /* Move on. */
    cur = next;
  }
}

/* Prints a linked list. */
void print_sll(node_t* head) {
  node_t* cur = head;
  while (cur != NULL) {
    printf ("%d ", cur->value);
    cur = cur->next;
  }
  printf("\n");
  return;
}
