#include <iostream>
#include <climits>
#include "binary_search_tree.h"

/* Returns a binary_search_tree_t structure with an int array values of size
 * "size" and the size field set appropriately. */
binary_search_tree_t* make_tree(int size) {
  binary_search_tree_t* tree = (binary_search_tree_t*)
                                malloc(sizeof(binary_search_tree_t));
  if (tree != NULL) {
    tree-> size = size;
    tree->values = (int *) malloc(sizeof(int) * size);

    if (tree->values == NULL) {
      return NULL;
    }
  }

  return tree;
}

/*
 * Initialize the binary search tree.
 */
void initialize_tree(binary_search_tree_t* tree) {
  for (int i = 0; i < tree->size; ++i) {
    tree->values[i] = INT_MIN;
  }
}

/*
 * Inserts a new value into a given tree.
 */
void insert(int value, binary_search_tree_t* tree) {
  int index = 0;
  while (index < tree->size) {
    if (tree->values[index] == INT_MIN) {
      tree->values[index] = value;
      return;
    }
    index = (tree->values[index] > value) ? 2 * index + 1 : 2 * index + 2;
  }
}

bool find_value(int value, binary_search_tree_t* tree) {
  int index = 0;
  while (index < tree->size) {
    if (tree->values[index] == value) {
      return true;
    }
    index = (tree->values[index] > value) ? 2 * index + 1 : 2 * index + 2;
  }
  return false;
}

/* Given a pointer to the root, prints all of the values in a list. */
void print_binary_search_tree(binary_search_tree_t* tree) {
  for (int i = 0; i < tree->size; ++i) {
    int current_value = tree->values[i];
    if (current_value != INT_MIN) {
      printf("%d\t", tree->values[i]);
    }
  }
  puts("");
}
