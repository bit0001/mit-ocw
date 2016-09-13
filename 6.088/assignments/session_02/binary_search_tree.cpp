#include <stdio.h>
#include <stdlib.h>
#include "binary_search_tree.h"

/*
 * Creates a new node from a given value, allocating heap memory for it.
 */
node_t* make_tree_node(int value) {
  node_t* new_tree_node = (node_t*) malloc(sizeof(node_t));

  if (new_tree_node != NULL) {
    new_tree_node->value = value;
    new_tree_node->left_node = NULL;
    new_tree_node->right_node = NULL;
  }

  return new_tree_node;
}

/*
 * Inserts a new value into a given binary search tree, allocating heap memory
 * for it.
 */
node_t* insert_value(int value, node_t* cur_root) {
  /* YOUR CODE HERE */
}

bool find_value(int value, node_t* root) {
  /* YOUR CODE HERE */
}

/*
 * Given a pointer to the root, frees the memory associated with an entire tree.
 */
void delete_binary_search_tree(node_t* root) {
  /* YOUR CODE HERE */
}

/* Given a pointer to the root, prints all o fthe values in a tree. */
void print_binary_search_tree(node_t* root) {
  if (root != NULL) {
    printf("%d ", root->value);
    print_binary_search_tree(root->left_node);
    print_binary_search_tree(root->right_node);
  }
  return;
}
