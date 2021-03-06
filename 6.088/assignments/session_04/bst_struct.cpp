#include <stdio.h>
#include <stdlib.h>
#include "bst_struct.h"

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
node_t* insert_value(int value, node_t* current_root) {
  if (current_root == NULL) {
    return make_tree_node(value);
  } else if (value < current_root->value) {
    current_root->left_node = insert_value(value, current_root->left_node);
  } else {
    current_root->right_node = insert_value(value, current_root->right_node);
  }
  return current_root;
}

bool find_value(int value, node_t* root) {
  if (root == NULL) {
    return false;
  }
  if (root->value == value) {
    return true;
  } else if (root->value > value) {
    return find_value(value, root->left_node);
  } else {
    return find_value(value, root->right_node);
  }
}

/*
 * Given a pointer to the root, frees the memory associated with an entire tree.
 */
void delete_binary_search_tree(node_t* root) {
  if (root == NULL) {
    return;
  }
  delete_binary_search_tree(root->left_node);
  delete_binary_search_tree(root->right_node);
  free(root);
}

/* Given a pointer to the root, prints all o fthe values in a tree. */
void print_binary_search_tree(node_t* root) {
  if (root != NULL) {
    print_binary_search_tree(root->left_node);
    printf("%d ", root->value);
    print_binary_search_tree(root->right_node);
  }
  return;
}
