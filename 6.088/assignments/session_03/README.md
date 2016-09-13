### Assignment 3: More C Memory Management

1. Re-implement the binary search tree code using an array instead of a node_t struct, using the given .h file.
2. Compare the two implementations. Which is faster? When would you prefer one implementation over the other, and why?
3. Include a README that includes your files, how to run/compile them, and your response to the above question.

### Which is faster?
The implementation that uses an array is much faster than the implementation that uses nodes.
When it is a matter of efficiency and I have complete binary tree I would definitely use the array implementation.
On the other hand, when having a non-complete binary tree or when trying to use other features of a binary tree,
the solution is to use the linked implementation.
