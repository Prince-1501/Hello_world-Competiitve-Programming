//
//  DATA STRUCTURES.cpp
//
//  Created by Prince  Kumar on 13/06/2020.
//  Copyright © 2020 Prince  Kumar. All rights reserved.
//
//                 ---** STANDARD TEMPLATE LIBRARY (STL) in C++ **---
//                         ---** PRACTICE CODING SKILLS **---


#include <iostream>
#include <deque>
using namespace std;

void showDeque(deque<int> q){
    deque<int> :: iterator it;
    for(it = q.begin(); it!=q.end() ;it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    deque<int> dq;
    dq.push_back(10);     //   7  10     -3  8
    dq.push_front(-3);
    dq.push_back(7);
    dq.push_front(8);
    
    showDeque(dq);
    cout<<"size of deque : "<<dq.size()<<endl;
    cout<<"max size : "<<dq.max_size()<<endl;
    
    cout<<dq.at(1)<<endl;
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
    
    //dq.pop_back();
    //showDeque(dq);
    
    dq.pop_front();
    showDeque(dq);
}
