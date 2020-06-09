//
//  DATA STRUCTURES.cpp
//
//  Created by Prince  Kumar on 8/06/2020.
//  Copyright © 2020 Prince  Kumar. All rights reserved.
//
//                 ---** STANDARD TEMPLATE LIBRARY (STL) in C++ **---
//                         ---** PRACTICE CODING SKILLS **---


#include <iostream>
#include <list>
using namespace std;

void show(list<int> l){
    list<int> :: iterator it;
    for(it = l.begin(); it!=l.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    list<int> list1;
    list<int> :: iterator it;
    list1.push_back(9);
    list1.push_back(2);
    list1.push_back(-7);
    list1.push_back(3);

    
    it = list1.begin();
    cout<<*it<<endl;
    
    show(list1);
    
    //list1.pop_back();
    //show(list1);
    
    cout<<"front : "<<list1.front()<<endl;
    cout<<"back : "<<list1.back()<<endl;
    
    //list1.clear();
    cout<<"empty or not : "<<list1.empty()<<endl;
    
    list1.erase(list1.begin());
    show(list1);


}


