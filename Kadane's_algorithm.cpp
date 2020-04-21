//
//  main.cpp
//
//  Created by Prince  Kumar on 21/04/20.
//  Copyright © 2020 Prince  Kumar. All rights reserved.
//
//                      ---** MAX SUM CONTIGUOUS SUBARRAY **---

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    cout<<"Enter the size of Array : "<<endl;
    int n; cin>>n;
    
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int max_so_far = a[0], max_ending_here =0;  // It store sum
    int start = 0 , end=0 , s=0;  // it store index
    
    for(int i=0;i<n;i++){
        max_ending_here+=a[i];
        if(max_so_far < max_ending_here){
            max_so_far=max_ending_here;
            start = s; end=i;
        }
        
        if(max_ending_here<0){
            max_ending_here = 0;
            s = i+1;
        }
    }
    
    int sum=0;
    for(int i=start ;i<=end ; i++){
        sum+=a[i];
        cout<<a[i]<<" ";
        
    }
    cout<<endl;
    cout<<sum<<endl;
    
    
}
