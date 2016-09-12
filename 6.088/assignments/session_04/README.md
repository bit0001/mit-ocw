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
