//  DATA STRUCTURES.cpp
//
//  Created by Prince  Kumar on 04/08/2020.
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

/* Given a non-empty binary search tree, return the node with minimum
key value found in that tree. Note that the entire tree does not
need to be searched. */

node * minValueNode(node * node){
    struct  node *current = node;
    
    /* loop down to find the leftmost leaf */
    while(current && current->left != NULL )
        current = current->left;
    
    return current;
}


/* Given a binary search tree and a key, this function deletes the key
and returns the new root */
node * deleteNode(node * root, int key){
    // base case
    if(root == NULL) return root;
    
    // If the key to be deleted is smaller than the root's key, then it lies in left subtree
    if(key < root->data){
        root->left  = deleteNode(root->left, key);
    }
    
    // If the key to be deleted is greater than the root's key, then it lies in right subtree
    else if(key > root->data){
        root->right  = deleteNode(root->right, key);
    }
    
    // if key is same as root's key, then This is the node to be deleted
    else{
        // node with only one child or no child
        if(root->left == NULL){
            node * temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
            node * temp = root->left;
            free(root);
            return temp;
        }
        
        // node with two children: Get the inorder successor (smallest in the right subtree)
        
        node * temp = minValueNode(root->right);
        
        // Copy the inorder successor's content to this node
        root->data = temp->data;
        
        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
        
    }
    
    return root;

}


int main(){
    /* Let us create following BST
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */
    
    node *root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);
    
    root = deleteNode(root, 20);
    inorder(root);
    cout<<endl;
    root = deleteNode(root, 30);
    inorder(root);
    cout<<endl;
    root = deleteNode(root, 50);
    inorder(root);
}
