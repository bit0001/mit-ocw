#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H
/*
 * Define a node structure.
 */
typedef struct node {
  int value;
  struct node* left_node;
  struct node* right_node;
} node_t;

/*
 * Creates a new node from a given value, allocating heap memory for it.
 */
node_t* make_tree_node(int value);

/*
 * Inserts a new value into a given binary search tree, allocating heap memory
 * for it.
 */
node_t* insert_value(int value, node_t* current_root);

bool find_value(int value, node_t* root);

/*
 * Given a pointer to the root, frees the memory associated with an entire list.
 */
void delete_binary_search_tree(node_t* root);

/* Given a pointer to the root, prints all of the values in a tree. */
void print_binary_search_tree(node_t* root);

#endif
