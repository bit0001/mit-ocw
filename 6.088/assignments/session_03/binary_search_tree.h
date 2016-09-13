#ifndef BINARY_SEARCH_TREE
#define BINARY_SEARCH_TREE
/*
 * Define a tree structure.
 * The range of values that can be used is INT_MIN < value <= INT_MAX
 */
typedef struct binary_search_tree {
  int* values;
  int size;
} binary_search_tree_t;

/* Returns a binary_search_tree_t structure with an int array values of size "size" and the
 * size field set appropriately. */
binary_search_tree_t* make_tree(int size);

/*
 * Initialize the binary search tree.
 * HINT: What should we initialize values to?  What requirements might we have
 * to add to the tree specification?
 */
void initialize_tree(binary_search_tree_t* tree);

/*
 * Inserts a new value into a given tree.
 */
void insert(int value, binary_search_tree_t* tree);

bool find_value(int value, binary_search_tree_t* tree);

/*
 * Given a pointer to the root, frees the memory associated with an entire list.
 */
void delete_binary_search_tree(binary_search_tree_t* tree);

/* Given a pointer to the root, prints all of the values in a list. */
void print_binary_search_tree(binary_search_tree_t* tree);

#endif
