//
//  main.cpp
//  project_3
//
//  Created by Ifeanyi Ugwuoke on 11/16/24.
//
#include "BST.h"
#include <iostream>
using namespace std;
int main()
{
    BST tree;
    int random_number;
    cout<<"Original Random Order: "<<endl;
    for (int i=0; i<35; i++)
    {
        random_number=rand() % 100;
        cout<<random_number<<endl;
        tree.insert(random_number);
    }
    cout<<"In order: "<<endl;
    tree.displayInOrder();
    cout<<"Pre order: "<<endl;
    tree.displayPreOrder();
    cout<<"Post order: "<<endl;
    tree.displayPostOrder();
    return 0;
}
