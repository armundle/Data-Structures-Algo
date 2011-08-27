#include "binaryTree.h"

template<typename T>
BST<T>::BST()
{
    head = NULL;
    size = 0;
}

template<typename T>
BST<T>::~BST()
{
}

template<typename T>
BST<T>::BST(const BinaryTree& rhs)
{
    size = rhs.size;
    head = NULL;
    if size==0 {return;}

    Node<T>* lhs = newNode(rhs.head->data);
}

