#ifndef BST_H
#define BST_H

/*
 * Binary search tree
 */
class BST {

 public:

  // DO NOT change the declarations of the given methods.

  // constructor
  BST();

  // destructor
  ~BST();

  // inserts "val" into the tree
  void insert(int val);

  // returns true if and only if "val" exists in the tree.
  bool find(int val);

  // prints the tree elements in the in-order traversal order
  void print_inorder();

};

#endif  // BST_H
