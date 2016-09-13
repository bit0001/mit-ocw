#include <assert.h>
#include <stdio.h>
#include "binary_search_tree.h"

void print_search_result(bool succeeded);

int main() {
  /* Insert 0. */
  binary_search_tree_t* cur = make_tree(32);
  initialize_tree(cur);

  insert(1, cur);
  assert(find_value(1, cur));
  print_binary_search_tree(cur);
  printf("\n");

  /* Insert 1. */
  insert(0, cur);
  assert(find_value(0, cur));
  print_binary_search_tree(cur); printf("\n");

  /* Insert 2. */
  insert(2, cur);
  assert(find_value(2, cur));
  print_binary_search_tree(cur); printf("\n");

  /* Insert 4. */
  insert(4, cur);
  assert(find_value(4, cur));
  print_binary_search_tree(cur); printf("\n");

  /* Insert 3 */
  insert(3, cur);
  assert(find_value(3, cur));
  print_binary_search_tree(cur);
  printf("\n");

  /* ADD YOUR TESTS HERE. */

  /* Delete the list. */
  delete_binary_search_tree(cur);

  return 0;
}

void print_search_result(bool succeeded) {
  if (succeeded) {
    puts("Value was found!");
    return;
  }
  puts("Value was not found!");
}
