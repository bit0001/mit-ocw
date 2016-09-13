#include <iostream>
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
