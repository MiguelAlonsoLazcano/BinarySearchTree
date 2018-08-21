//
// Created by alonso on 8/21/18.
//

#ifndef BINARYSEARCHTREE_BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_BINARYSEARCHTREE_H

#include <iostream>
#include <stdexcept>
#include <string>
#include "Node.h"

class BinarySearchTree
{
public:
    static bool contains(const Node& root, int value)
    {
        std::cout << "find(" << value << ") in " << root.getValue() << " node " << std::endl;
        if ( value == root.getValue())
            return true;
        if ( value > root.getValue())
            return contains(*root.getRight(),value);
        if ( value < root.getValue())
            return contains(*root.getLeft(), value);
    }
};


#endif //BINARYSEARCHTREE_BINARYSEARCHTREE_H
