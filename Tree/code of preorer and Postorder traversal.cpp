//  DATA STRUCTURES.cpp
//
//  Created by Prince  Kumar on 23/07/2020.
//  Copyright © 2020 Prince Kumar. All rights reserved.
//
//                 ---** STANDARD TEMPLATE LIBRARY (STL) in C++ **---
//                         ---** PRACTICE CODING SKILLS **---


#include <iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
};

node* newNode(int data){
    node* temp = new node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

void printInorder(node *node){
    if(node == NULL)
        return;
    
    /* first traverse left part of tree */
    printInorder(node->left);
    
    /* then print data  */
    cout<<node->data<<" ";
    
    /* and last  traverse right part of tree */
    printInorder(node->right);
}

void printPreorder(node *node){
    if(node == NULL)
        return;
    
    /* then print data  */
    cout<<node->data<<" ";
    
    
    /* first traverse left part of tree */
    printPreorder(node->left);
    
    
    /* and last  traverse right part of tree */
    printPreorder(node->right);
}


void printPostorder(node *node){
    if(node == NULL)
        return;
    
    /* first traverse left part of tree */
    printPostorder(node->left);
    
    
    /* and last  traverse right part of tree */
    printPostorder(node->right);
    
    /* then print data  */
    cout<<node->data<<" ";
}


int main(){
    node * root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    
    /*
                   1
                 /   \
                2     3
               / \
              4   5
        
        */
    cout<<"Inorder Traversl of Tree : "<<endl;
    printInorder(root);
    cout<<"preorder Traversl of Tree : "<<endl;
    printPreorder(root);
    cout<<"postorder Traversl of Tree : "<<endl;
    printPostorder(root);

}
