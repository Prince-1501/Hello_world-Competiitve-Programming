//
//  DATA STRUCTURES.cpp
//
//  Created by Prince  Kumar on 20/05/2020.
//  Copyright © 2020 Prince  Kumar. All rights reserved.
//
//                      ---** LINKED LIST in C++ **---

//                     ---** PRACTICE CODING SKILLS **---


#include <iostream>
using namespace std;

//Linked list Node
struct node{
    int data;
    node *next;
};

void printList (node *n){
    int count=0;
    while(n!=NULL){
        cout<<n->data<<endl;
        n = n->next;
        count++;
    }
    
    cout<<"No. of element in linked list is : "<<count<<endl;
}

void printMiddleElement( node *head){
    node *slow_ptr = head;
    node *fast_ptr = head;
    
    if(head!=NULL){
        while(fast_ptr!=NULL && fast_ptr->next!=NULL){
            fast_ptr = fast_ptr->next->next;
            slow_ptr = slow_ptr->next;
        }
        cout<<"Middle Element is : "<<slow_ptr->data<<endl;
    }
    
}

int main(){
    
    /*                   Make A linked List                            */
    node *head  = new node(); node *second = new node(); node *third = new node();
    node *four  = new node(); node *five = new node(); node *six = new node();
    node *seven  = new node(); node *eight = new node(); node *nine = new node();
    
    head -> data = 5;   head -> next = second;
    second->data = 1;   second ->next = third;
    third -> data = -3; third ->next = four;
    four -> data = 11;  four -> next = five;
    five->data = 10;    five ->next = six;
    six -> data = 2;    six ->next = seven;
    seven -> data = 7;  seven -> next = eight;
    eight->data = 9;    eight ->next = nine;
    nine -> data = 18;  nine ->next = NULL;
    
    
    //printList(head);
    
//    node *start = head;
//    for(int i=0;i<5;i++){
//        cout<<start->data<<endl;
//        start= start->next;
//    }
    
    printMiddleElement(head);
}
