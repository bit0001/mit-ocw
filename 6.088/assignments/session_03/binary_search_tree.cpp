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

/* Given a pointer to the root, prints all of the values in a list. */
void print_binary_search_tree(binary_search_tree_t* tree) {
  for (int i = 0; i < tree->size; ++i) {
    printf("%d\t", tree->values[i]);
  }
  puts("");
}
