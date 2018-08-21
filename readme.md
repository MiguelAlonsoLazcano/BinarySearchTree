# Binary Search Tree

Binary search tree (BST) is a binary tree where the value of each node is larger
or equal to the values in all the nodes in that node's left subtree and is smaller
than the values in all the nodes in that node's right subtree.

![Alt text]( img/binary_search_tree.png "Virtual Address Space")

Write a function that checks if a given binary search tree contains a given value.

For example, for the following tree:

    n1 (Value: 1, Left: null, Right: null)
    n2 (Value: 2, Left: n1, Right: n3)
    n3 (Value: 3, Left: null, Right: null)

Call to contains(n2, 3) should return true since a tree with root at n2 contains number 3.

### reference 
https://www.testdome.com/questions/cpp/binary-search-tree/