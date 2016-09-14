### Assignment 4: Introduction to C++
In this assignment, you will re-implement the binary search tree using C++ classes.

1. Download and study the given header file "BST.h". This defines the interface to the binary search tree class, and includes the functionality that you need to provide to the client of the tree.
2. Implement the methods "insert", "find", and "print_inorder". You can define as many extra classes/fields/methods as you need, but DO NOT modify the declarations for the existing methods (i.e. these three methods, along with the constructor & destructor). You may also reuse code from the previous assignments. Think about access control issues — what should be exposed to or hidden from the client?
3. Write test cases to show that your methods work correctly. You may extend the given test file, test_BST.cc.
4. Answer the following questions, and put your responses in a text file called "answers.txt":
  4.1. Compare the implementation of the BST in this assignment to those from the previous ones (i.e. struct & array-based implementations). What are some of the differences? How do they affect the client of the BST?
  4.2. What is the representation invariant for the BST? How would you modify your code to ensure that the invariant holds?
  4.3. There are an infinite number of BSTs in this universe (theoretically), so it is impossible to test that your code works for all BSTs. What approach did you take to make sure it's correct? Are your test cases sufficient, and how do you know?

5. Submit all of your files (*.h, *.cc, answers.txt) in a compressed .zip or .tar.gz file, along with a README describing (1) the command(s) you used to compile your program and (2) the command(s) you used to test your program. If you choose to include tests, you should also describe them. If you used a Makefile, please include that as well.

### Answers
4.1 The main difference between this implementation and the other ones is the use of the Client/Server model which implies that the client has no idea about the implementation of the classes made by the server. The difference between this and the array-based implementation is that this one could be used for every binary tree, while the array-based is just useful for complete binary trees. Using an OOP approach gives the client enough information to use the tools created by the server. Although this code used that was written in previous assignments, when using a struct implementation the client did not have so clear information, so he had to check how the struct was implemented in order to use the functions.

4.2 The representation invariant is to make sure that the values from the left of a node is less than this value, and the values from the right of the node are greater or equal to this value. The way to make sure that the representation invariant holds is to implement a similar function to print, that instead of printing checks that the previous value is less than the current one.

4.3 One way to test a binary search tree is to implement an in-order function to print its content, so you can see if the tree is really printing the values in order (ascending/descending).
