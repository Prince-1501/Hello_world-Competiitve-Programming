//
//  DATA STRUCTURES.cpp
//
//  Created by Prince  Kumar on 30/05/2020.
//  Copyright © 2020 Prince  Kumar. All rights reserved.
//
//                 ---** INSETION OF NODE IN DOUBLY LINKED LIST in C++ **---
//                         ---** PRACTICE CODING SKILLS **---


#include <iostream>
using namespace std;

/* ----- Doubly Linked list Node  ------ */
struct node{
    int data;
    node *next;
    node *prev;
};


/*-------  Print the Doubly Linked List  ------- */
void printList (node *n){
    int count=0;
    while(n!=NULL){
        cout<<n->data<<endl;
        n = n->next;
        count++;
    }
    cout<<"No. of element in Doubly linked list is : "<<count<<endl;
}

/*-------  Insert node in Front of Doubly Linked List  ------- */

void push(node **head_ref, int new_data){
    
    node *new_node = new node();
    new_node->data=  new_data;
    new_node->next = *head_ref;
    new_node->prev = NULL;
    
    if((*head_ref) != NULL){
        (*head_ref)->prev = new_node;
    }
    
    (*head_ref) = new_node;
}

/*-------  Insert node in Middle of Doubly Linked List  ------- */

void insertAfter(node *prev_node, int new_data){
    
    if(prev_node == NULL){
        cout<<"given prev node can't be null"<<endl;
        return;
    }
    
    node *new_node = new node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    
    prev_node->next = new_node;
    new_node->prev = prev_node;
    
    if(new_node->next != NULL){
        new_node->next->prev = new_node;
    }
}

/*-------  Insert node in End of Doubly Linked List  ------- */

void append(node **head_ref, int new_data){
    node *new_node = new node();
    new_node->data = new_data;
    new_node->next = NULL;
    
    node *last  = *head_ref;  //head
    if(*head_ref == NULL){
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }
    
    while(last->next != NULL){
        last = last->next;
    }
    
    last->next = new_node;
    new_node->prev = last;
    
    return;
}


int main(){
    
    node *head= NULL;
    push(&head, 4);
    push(&head, 11);
    push(&head, -3);
    // -3 11 4
    
    insertAfter(head->next, 10);
    // -3 11 10 4
    
    append(&head, 9);
    // -3 11 10 4 9
    
    printList(head);
}
