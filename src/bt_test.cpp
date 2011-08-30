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
    
    //b.insert(1); b.insert(2); b.insert(3); b.insert(4); b.insert(5);
    
    b.insert(1); b.insert(3); b.insert(-3); b.insert(-4); b.insert(2); b.insert(-2);

    //b.insert(10); b.insert(5); b.insert(3); b.insert(8); b.insert(6); b.insert(9); b.insert(20); b.insert(15); b.insert(17);

    cout << "Just a test" << endl;
    cout << "Size: " << b.getSize() << endl;
    cout << "MaxDepth " << b.maxDepth() << endl;
    cout << "Min: " << b.getMin() << endl;
    cout << "Max: " << b.getMax() << endl;
    

    b.print(0);

    if(b.isBST())
    {
      cout << "The tree is BST." << endl;
    }
    else
    {
      cout << "Not a BST. Something wrong with the code." << endl;

    return 0;
    }
}

