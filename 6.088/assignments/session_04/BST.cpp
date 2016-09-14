#include <iostream>
#include "BST.h"

BST::BST() {
  m_root = NULL;
}

BST::~BST(){
  delete_binary_search_tree(m_root);
}

void BST::insert(int value) {
  if (m_root == NULL) {
    m_root = make_tree_node(value);
    return;
  }

  insert_value(value, m_root);
}

bool  BST::find(int value) {
  return find_value(value, m_root);
}

void BST::print_inorder() {
  print_binary_search_tree(m_root);
  puts("");
}
