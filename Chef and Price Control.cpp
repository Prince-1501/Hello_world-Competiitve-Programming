//
//  COMPETITIVE PROGRAMMING .cpp
//
//  Created by Prince  Kumar on 15/06/2020.
//  Copyright © 2020 Prince  Kumar. All rights reserved.
//
//                       ---** COMPETITIVE PROGRAMMING in C++ **---
//                            ---** PRACTICE CODING SKILLS **---


#include <iostream>
using namespace std;
int main(){
    int T; cin>>T;
    while(T--){
        int n, k; cin>>n>>k;
        int prev_amt=0;
        int ori_amt=0;
        // 2 3 4 7 10     5
        for(int i=0;i<n;i++){
            int x; cin>>x;   // x = 2
            prev_amt+=x;  // profit initially   prev_Amt = 2
            
            if(x>k){
                x=k;
            }               // x= 5
            ori_amt+=x;    // ori_amt = 2
        }
        cout<<prev_amt-ori_amt<<endl;
        
//        int a[n];
//        for(int i=0;i<n;i++){
//            cin>>a[i];
//            prev_amt+=a[i];
//        }
//        for(int i=0;i<n;i++){
//            if(a[i]>k){
//                a[i]=k;
//            }
//            ori_amt+=a[i];
//        }
    }
}
