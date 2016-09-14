#ifndef BST_H
#define BST_H

#include "bst_struct.h"
/*
 * Binary search tree
 */
class BST {
private:
  node_t* m_root;
public:

  // DO NOT change the declarations of the given methods.

  // constructor
  BST();

  // destructor
  ~BST();

  // inserts "value" into the tree
  void insert(int value);

  // returns true if and only if "value" exists in the tree.
  bool find(int value);

  // prints the tree elements in the in-order traversal order
  void print_inorder();

};

#endif  // BST_H
