//
//  DATA STRUCTURES.cpp
//
//  Created by Prince  Kumar on 23/05/2020.
//  Copyright © 2020 Prince  Kumar. All rights reserved.
//
//                 ---** INSERTION OF NODE IN  LINKED LIST in C++ **---

//                         ---** PRACTICE CODING SKILLS **---


#include <iostream>
using namespace std;

/* ----- Linked list Node  ------ */
struct node{
    int data;
    node *next;
};

/* -------  Print the Linked List  -------*/
void printList (node *n){
    int count=0;
    while(n!=NULL){
        cout<<n->data<<endl;
        n = n->next;
        count++;
    }
    cout<<"No. of element in linked list is : "<<count<<endl;
}

/* ------  INSERTION OF NODE AT FRONT OF LINKED LIST --------*/

void push(node **head_ref , int newData){
    node *newNode = new node();
    newNode -> data = newData;
    newNode -> next = *head_ref;
    *head_ref = newNode;
}

/* ------  INSERTION OF NODE AT MIDDLE OF LINKED LIST --------*/

void insertAfter(node *prev_node , int newData){
    node *newNode = new node();
    newNode->data = newData;
    newNode->next = prev_node->next;
    prev_node->next = newNode;
}

int main(){
   
    node *head = NULL;
    push(&head , 5);
    push(&head , 7);
    push(&head , -3);
    // -3 7 5
    
    insertAfter(head->next,79);
    
    printList(head);
    
}
