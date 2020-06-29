//  DATA STRUCTURES.cpp
//
//  Created by Prince  Kumar on 29/06/2020.
//  Copyright © 2020 Prince  Kumar. All rights reserved.
//
//                 ---** STANDARD TEMPLATE LIBRARY (STL) in C++ **---
//                         ---** PRACTICE CODING SKILLS **---


#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;
void show(vector<int>v){
    for(int i=0;i<(int)v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    v.push_back(3);
    v.push_back(0);
    v.push_back(-4);
    v.push_back(7);
    v.push_back(13);
    v.push_back(8);
    v.push_back(2);

    show(v);
    //sort(v.begin(), v.end());
    //show(v);
    reverse(v.begin(), v.end());
    show(v);
    cout<<*max_element(v.begin(), v.end())<<endl;
    
    int x;
    x = *min_element(v.begin(), v.end());
    cout<<"Minimum element : "<<x<<endl;
    
    //cout<<accumulate(v.begin(), v.end(),0 )<<endl;
    
    //2  3  4 5
    int sum=0;
    sum = accumulate(v.begin(), v.end(),sum);
    cout<<sum<<endl;

    
}
