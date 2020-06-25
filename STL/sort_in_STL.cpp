//  DATA STRUCTURES.cpp
//
//  Created by Prince  Kumar on 25/06/2020.
//  Copyright © 2020 Prince  Kumar. All rights reserved.
//
//                 ---** STANDARD TEMPLATE LIBRARY (STL) in C++ **---
//                         ---** PRACTICE CODING SKILLS **---


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void showArray(int a[]){
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int a[10]={9, 8, 1, 2, 7 , 4, 0, 5, 3, 5};
    showArray(a);
    
    sort(a, a+10);
    showArray(a);
    
    vector<int> v;
    v.push_back(10);
    v.push_back(-3);
    v.push_back(2);
    v.push_back(91);
    v.push_back(5);
    v.push_back(7);
    
    sort(v.begin(), v.end());
    for(int i=0;i<(int)v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    
}
