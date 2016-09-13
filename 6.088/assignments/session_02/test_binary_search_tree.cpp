#include <assert.h>
#include <stdio.h>
#include "binary_search_tree.h"

int main() {
  /* Insert 0. */
  node_t* cur = make_tree_node(1);
  print_binary_search_tree(cur);
  printf("\n");
  assert(find_value(1, cur) == true);

  /* Insert 1. */
  cur = insert_value(0, cur);
  assert(find_value(0, cur) == true);
  print_binary_search_tree(cur);
  printf("\n");

  /* Insert 2. */
  cur = insert_value(2, cur);
  assert(find_value(2, cur) == true);

  /* Print the tree. */
  print_binary_search_tree(cur);
  printf("\n");

  /* Insert 4. */
  cur = insert_value(4, cur);
  assert(find_value(4, cur) == true);

  /* Insert 3 */
  cur = insert_value(3, cur);
  assert(find_value(3, cur) == true);
  print_binary_search_tree(cur);
  printf("\n");

  /* ADD YOUR TESTS HERE. */
  /*
  node_t* root = make_tree_node(1);
  print_binary_search_tree(root);
  puts("");
  root = insert_value(2, root);
  root = insert_value(3, root);
  root = insert_value(0, root);
  print_binary_search_tree(root);
  puts("");
  */

  /* Delete the list. */
  //delete_bst(cur);

  return 0;
}
