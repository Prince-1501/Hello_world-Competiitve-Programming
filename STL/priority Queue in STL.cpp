//
//  DATA STRUCTURES.cpp
//
//  Created by Prince  Kumar on 14/06/2020.
//  Copyright © 2020 Prince  Kumar. All rights reserved.
//
//                 ---** STANDARD TEMPLATE LIBRARY (STL) in C++ **---
//                         ---** PRACTICE CODING SKILLS **---


#include <iostream>
#include <queue>
using namespace std;

void showPriorityQueue(priority_queue<int> pq){
    priority_queue<int> q = pq;
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main(){
    priority_queue<int> q;
    q.push(10);
    q.push(-3);
    q.push(7);
    q.push(8);
    
    showPriorityQueue(q);
    cout<<q.size()<<endl;
    
    q.pop();
    q.pop();
    cout<<q.empty()<<endl;
    showPriorityQueue(q);

}
