
#include <iostream>
#include "BinarySearchTree.h"




int main()
{

    std::cout << "Binary Search Tree" << std::endl;

    Node n1(1, NULL, NULL);
    Node n3(3, NULL, NULL);
    Node n2(2, &n1, &n3);

    std::cout << "found: " <<  BinarySearchTree::contains(n2, 3) << std::endl;
    std::cout << "found " << BinarySearchTree::contains(n2, 1) << std::endl;

    return 0;
}



