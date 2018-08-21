//
// Created by alonso on 8/21/18.
//

#ifndef BINARYSEARCHTREE_NODE_H
#define BINARYSEARCHTREE_NODE_H


/*
 * @brief Node ADT
 * */
class Node
{
public:
    Node(int value, Node* left, Node* right)
    {
        this->value = value;
        this->left = left;
        this->right = right;
    }

    int getValue() const
    {
        return value;
    }

    Node* getLeft() const
    {
        return left;
    }

    Node* getRight() const
    {
        return right;
    }

private:
    int value;
    Node* left;
    Node* right;
};


#endif //BINARYSEARCHTREE_NODE_H
