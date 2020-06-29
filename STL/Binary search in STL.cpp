//  DATA STRUCTURES.cpp
//
//  Created by Prince  Kumar on 28/06/2020.
//  Copyright © 2020 Prince  Kumar. All rights reserved.
//
//                 ---** STANDARD TEMPLATE LIBRARY (STL) in C++ **---
//                         ---** PRACTICE CODING SKILLS **---


#include <iostream>
#include <algorithm>
using namespace std;
void show(int a[], int asize){
    for(int i=0;i<asize;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int a[] = { 2, 3, 0 , 9, 5, 6, 8, 1, 4};
    int size = sizeof(a)/sizeof(a[0]);
    
    show(a, size);
    
    cout<<"array after sorting"<<endl;
    sort(a, a+size);//
    show(a, size);
    
    if(binary_search(a, a+size, 18)){
        cout<<"Yes our element is present in the array"<<endl;
    }else{
        cout<<"Our element is not present in the array"<<endl;
    }
}

