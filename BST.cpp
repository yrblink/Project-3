//
//  BST.cpp
//  project_3
//
//  Created by Ifeanyi Ugwuoke on 11/16/24.
//
#include "BST.h"
#include <iostream>
using namespace std;

BST::BST()
{
    root=nullptr;
}
BST::~BST()
{
    destroyTree(root);
}
void BST::insert(int value)
{
    BinaryTree* newNode = new BinaryTree(value);
    if (!newNode) {
        cout << "Memory allocation failed for new node." << endl;
        return;
    }
    insertNode(root, newNode);
}
void BST::insertNode(BinaryTree *&nodePtr, BinaryTree *&newNode)
{
    if (nodePtr == nullptr)
    {
        nodePtr = newNode;
    }
     else if (newNode->random_number < nodePtr->random_number)
     {
         insertNode(nodePtr->leftNext, newNode);
     }
     else
     {
        insertNode(nodePtr->rightNext, newNode);
    }
}
void BST::displayInOrder(BinaryTree* nodePtr)const
{
    if (nodePtr)
    {
        displayInOrder(nodePtr->leftNext);
        cout<<nodePtr->random_number<<" "<<endl;
        displayInOrder(nodePtr->rightNext);
    }
}
void BST::displayInOrder() const
{
    displayInOrder(root);
}
void BST::displayPreOrder(BinaryTree *nodePtr)const
{
    if (nodePtr)
    {
        cout<<nodePtr->random_number<<" "<<endl;
        displayPreOrder(nodePtr->leftNext);
        displayPreOrder(nodePtr->rightNext);
    }
}
void BST::displayPreOrder()const
{
    displayPreOrder(root);
}
void BST::displayPostOrder(BinaryTree *nodePtr) const
{
    if (nodePtr)
    {
        displayPostOrder(nodePtr->leftNext);
        displayPostOrder(nodePtr->rightNext);
        cout<<nodePtr->random_number<<" "<<endl;
    }
}
void BST::displayPostOrder()const
{
    displayPostOrder(root);
}
void BST::destroyTree(BinaryTree*&nodePtr)
{
    if (nodePtr)
    {
        if (nodePtr->leftNext)
            destroyTree(nodePtr->leftNext);
        if (nodePtr->rightNext)
            destroyTree(nodePtr->rightNext);
        delete nodePtr;
    }
}
