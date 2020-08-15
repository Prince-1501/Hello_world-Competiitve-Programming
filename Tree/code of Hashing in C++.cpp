//  DATA STRUCTURES.cpp
//
//  Created by Prince  Kumar on 14/08/2020.
//  Copyright © 2020 Prince Kumar. All rights reserved.
//
//                      ---** TREE DATA STRUCTURE in C++ **---
//                         ---** PRACTICE CODING SKILLS **---


#include <iostream>
#include <math.h>
using namespace std;
#define MAX 1000

bool hashTable[MAX+1][2];

bool search(int x){
    if(x>=0){
        if(hashTable[x][0] == 1 ){
            return true;
        }else{
            return false;
        }
    }else{
        x = abs(x);
        if(hashTable[x][1] == 1 ){
            return true;
        }else{
            return false;
        }
    }
}

void insert(int a[], int n){
    for(int i=0;i<n;i++ ){
        if(a[i]>=0){
            hashTable[a[i]][0] = 1;
        }
        else{
            hashTable[abs(a[i])][1] = 1;
        }
    }
}

int main(){
    int arr[] = {-1, 9, 2, -5, 3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    insert(arr, n);
    
    int find  = -1;
    if(search(find)){
        cout<<"Element is present"<<endl;
    }else{
        cout<<"Element is not present "<<endl;
    }
    
}
