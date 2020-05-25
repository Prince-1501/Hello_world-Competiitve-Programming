//
//  DATA STRUCTURES.cpp
//
//  Created by Prince  Kumar on 25/05/2020.
//  Copyright © 2020 Prince  Kumar. All rights reserved.
//
//                 ---** DELETION OF NODE IN  LINKED LIST in C++ **---
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

/* ------  DELETION OF NODE IN LINKED LIST --------*/


void deleteNode(node **head_ref , int key){
    // initialise prev and temp
    node *prev, *temp;
    
    //store head to the temp;
    temp  = *head_ref;
    
    //if key is present in head
    if(temp!=NULL && temp->data == key){
        *head_ref = temp->next;
        free(temp);
        return;
    }
    
    //we traverse the linkedlist and keep track og prev node
    // because we have to perform prev->next
    
    while(temp!=NULL && temp->data!=key){
        prev=temp;
        temp = temp->next;
    }
    
    // we travserse whole linked list and we didn't got the key
    if(temp==NULL) return;
    
    // but, if we found the key
    prev->next = temp->next;
    free(temp);
}


int main(){
   
    node *head = NULL;
    push(&head , 5);
    push(&head , 7);
    push(&head , -3);
    push(&head , 2);
    push(&head , 9);
    
    printList(head);
    
    deleteNode(&head, 2);
    
    printList(head);
    
    
}
