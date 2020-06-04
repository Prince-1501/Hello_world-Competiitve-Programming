//
//  DATA STRUCTURES.cpp
//
//  Created by Prince  Kumar on 3/06/2020.
//  Copyright © 2020 Prince  Kumar. All rights reserved.
//
//                 ---** STANDARD TEMPLATE LIBRARY (STL) in C++ **---
//                         ---** PRACTICE CODING SKILLS **---


#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;    /*  3 10 7*/
    vector<int> :: iterator it;
    v.push_back(3);
    v.push_back(10);
    v.push_back(7);
    
    auto a = v.begin();   // it provides iterator which points first element of vector
    cout<<"first element  : "<<a[0]<<endl;
    //v.pop_back();
    
    it = v.begin();
    cout<<"iterator points : "<<it[0]<<endl;
    
    it = v.end();
    //cout<<it<<endl;
    
    int size = (int)v.size();

    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


