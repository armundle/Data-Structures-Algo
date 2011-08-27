#include<iostream>
using std::cout;
using std::endl;
using std::endl;

#include "binaryTree.h"

int main()
{
    BST<int> b;

    /*
    b.insert(1);
    b.insert(2);
    b.insert(-9);
    b.insert(24);
    b.insert(-3);
    b.insert(-1);
    b.insert(-30);
    */
    b.insert(1); b.insert(2); b.insert(3); b.insert(4); b.insert(5);

    cout << "Just a test" << endl;
    cout << "Size: " << b.getSize() << endl;
    cout << "MaxDepth " << b.maxDepth() << endl;
//    cout << "Min: " << b.getMin() << endl;
    cout << "Max: " << b.getMax() << endl;
    return 0;
}

