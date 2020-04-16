//
//  main.cpp
//
//  Created by Prince  Kumar on 16/04/20.
//  Copyright © 2020 Prince  Kumar. All rights reserved.
//
//                      ---** ADD ONE TO THE NUMBER **---

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    cout<<"Enter The size of Vector : "<<endl;
    int n; cin>>n;
    
    vector<int> v; v.push_back(0);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    // check conditions
    int k = (int)v.size() - 1;
    
    if(v[k]<9){
        v[k]+=1;  // v[k] = v[k] + 1;
    }else{
        
        while(v[k]==9){
            v[k]=0;
            k= k-1;
        }
        
        v[k]= v[k]+1;
    }
    
    // Print the result
    // we have to omit the leading zero's
    
    int s = 0;
    for(int i=0;i<(int)v.size() ;i++){
        if(v[i]!=0){
            s=i;  // here we store index
            break;
        }
    }
    
    for (int i=s;i<(int)v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
