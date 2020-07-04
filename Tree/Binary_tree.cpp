//  DATA STRUCTURES.cpp
//
//  Created by Prince  Kumar on 05/07/2020.
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
    node* element = new node();
    element->data = data;
    element->left = NULL;
    element->right = NULL;

    return element;
}
//node* newNode(int data){
//    node* node = new struct node();
//    node->data = data;
//    node->left = NULL;
//    node->right = NULL;
//
//    return node;
//}

void printNode(node *n){
    while( n!=NULL){
        cout<<n->data<<" ";
        n = n->left;
    }
    cout<<endl;
}
int main(){
    // make root node
    node* root  = newNode(1);
    
    /*
            1
          /   \
        NULL  NULL
     
     */
    
    root->left = newNode(2);
    /*
           1
         /   \
       2      NULL
      /  \
    NULL  NULL
     
    
    */
    root->right = newNode(3);
    root->left->left = newNode(4);
    
    printNode(root);
}

// 1 2 3 4 5 6 7
