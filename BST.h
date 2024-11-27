//
//  BST.h
//  project_3
//
//  Created by Ifeanyi Ugwuoke on 11/16/24.
//

#ifndef BST_h
#define BST_h
#include "BST.h"
#include <iostream>
#include <stdio.h>
using namespace std;
class BST
{
private:
    struct BinaryTree
    {
        int random_number;
        BinaryTree* rightNext;
        BinaryTree* leftNext;
        BinaryTree(int value) : random_number(value) {}
    } ;
    BinaryTree* root;
public:
    BST();
    ~BST();
    void insert(int );
    void insertNode(BinaryTree *&, BinaryTree *&);
    bool searchNode(int);
    void removeNode(int);
    void displayInOrder(BinaryTree* )const;
    void displayInOrder() const;
    void displayPreOrder(BinaryTree*)const;
    void displayPreOrder()const;
    void displayPostOrder(BinaryTree*)const;
    void displayPostOrder()const;
    void destroyTree(BinaryTree *&);
};

#endif /* BST_h */
