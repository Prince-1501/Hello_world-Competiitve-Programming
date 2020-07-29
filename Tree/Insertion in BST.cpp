//  DATA STRUCTURES.cpp
//
//  Created by Prince  Kumar on 29/07/2020.
//  Copyright © 2020 Prince Kumar. All rights reserved.
//
//                      ---** TREE DATA STRUCTURE in C++ **---
//                         ---** PRACTICE CODING SKILLS **---


#include <iostream>
using namespace std;
struct node{
    int data;
    node* left ,* right;
};

node* newNode(int data){
    node* temp = new node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

void inorder(node* root){
    if(root!=NULL){
        inorder(root->left);
        cout<<(root->data)<<" ";
        inorder(root->right);
    }
}

node *insert(node * node, int key){
    
    // tree empty
    if(node == NULL) return newNode(key);
    
    // key is smaller than node->data
    if(key < (node->data)){
        node->left = insert(node->left, key);
    }
    else if( key > (node->data)){
        node->right = insert(node->right, key);
    }
    
    // else
    return node;
}

int main(){
    /*     50
        /     \
       30      70
      /  \    /  \
    20   40  60   80  */
    
    node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    inorder(root);
    cout<<endl;

}
