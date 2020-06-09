//
//  DATA STRUCTURES.cpp
//
//  Created by Prince  Kumar on 8/06/2020.
//  Copyright © 2020 Prince  Kumar. All rights reserved.
//
//                 ---** STANDARD TEMPLATE LIBRARY (STL) in C++ **---
//                         ---** PRACTICE CODING SKILLS **---


#include <iostream>
#include <queue>
using namespace std;

void show(queue<int> QUEUE){
    queue<int> q = QUEUE;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main(){
    queue<int> q;
    q.push(10);
    q.push(11);
    q.push(-3);
    q.push(2);
    
    show(q);
    
    cout<<"size : "<<q.size()<<endl;
    cout<<"front : "<<q.front()<<endl;
    cout<<"back : "<<q.back()<<endl;
    
    q.pop();
    show(q);
}
