#ifndef BINARYTREE_H_
#define BINARYTREE_H_

#include<cstdlib>

template<typename T>
class BST
{
    private:
        template<typename U>
            struct Node{
                U data;
                Node* left;
                Node* right;
            };
        
        Node<T>* head;
        
        std::size_t size;

        Node<T>* newNode(T value)
        {
            Node<T>* node = new(Node<T>);
            node->data = value;
            node->left = NULL;
            node->right = NULL;

            return node;
        }

        Node<T>* search(T value)
        {
            Node<T>* tmp = head;
            
            while(value != tmp->data)
            {
                if(value <= tmp->data)
                {
                    if(tmp->left != 0) tmp = tmp->left;
                    else break;
                }

                else
                {
                    if(tmp->right != 0) tmp = tmp->right;
                    else break;
                }
            }

            return tmp;
        }

        std::size_t getDepth(Node<T>* node)
        {
            std::size_t count, lcount, rcount, tcount;
            count = 0;
            lcount = 0;
            rcount = 0;

            if(node == NULL)
            {
                return count;
            }
            else
           {
                count++;
                if(node->left != 0)
                {
                    lcount += getDepth(node->left);
                }
                if(node->right != 0)
                {
                    rcount += getDepth(node->right);
                }
           }

            return (lcount > rcount)?(count+lcount):(count+rcount);
        }


        
        

    public:
        //Contructor
        BST();
        //Destructor
        ~BST();
        //Copy contructors
        BST(const BST& rhs);
        BST& operator =(const BST& rhs);
        T retrieve(T val);
        std::size_t maxDepth();
        std::size_t getSize() {return size;}; //Just a test function. Returns the total number of node + root
        bool insert(T val);
        bool del(T val);
        bool isEmpty() {return (head==0);};
        void postOrder();
        void preOrder();
        void inOrder();
        T getMin();
        T getMax();


};

#endif

//#include "binaryTree.h"

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

/*template<typename T>
BST<T>::BST(const BST<T>& rhs)
{
    size = rhs.size;
    head = NULL;
    if (size==0) {return;}

    Node<T>* lhs = newNode(rhs.head->data);

}*/

/*template<typename T>
BST<T>& BST<T>::operator=(const BST& rhs)
{
}
*/

template<typename T>
bool BST<T>::insert(T val)
{
    if(!isEmpty())
    {
        Node<T>* tmp = search(val);

        if(tmp->data == val) return false;

        if(val <= tmp->data) //left
        {
            Node<T>* insNode = newNode(val);
            tmp->left = insNode;
            size++;
        }
        else//right
        {
            Node<T>* isNode = newNode(val);
            tmp->right = isNode;
            size++;
        }
    }
    else //empty tree, insert at the head
    {
        head = newNode(val);
        size++;
    }

    return true;
}

template<typename T>
std::size_t BST<T>::maxDepth()
{
    if(isEmpty())
    {
        return 0;
    }
    else
    {
        return getDepth(head);
    }
    
}

template<typename T>
T BST<T>::getMin()
{
    if(!isEmpty())
    {
        Node<T>* tmp = head;

        while(tmp->left != NULL)
        {
            tmp = tmp->left;
        }
        return tmp->data;
    }
}


template<typename T>
T BST<T>::getMax()
{
    if(!isEmpty())
    {
        Node<T>* tmp = head;

        std::cout << "here" << std::endl;

        while(tmp->right != NULL)
        {
            tmp = tmp->right;
        }
        return tmp->data;
    }
}
