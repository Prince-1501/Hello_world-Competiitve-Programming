//
//  COMPETITIVE PROGRAMMING .cpp
//
//  Created by Prince  Kumar on 15/06/2020.
//  Copyright © 2020 Prince  Kumar. All rights reserved.
//
//                       ---** COMPETITIVE PROGRAMMING in C++ **---
//                            ---** PRACTICE CODING SKILLS **---
//                               ---** CHEF AND ICECREAM **---


#include <iostream>
using namespace std;
int main(){
    int T; cin>>T;
    while(T--){
        int n; cin>>n;
        int a[3]= {0,0,0};  // 5 10 15
        int check=0;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            
            if(x==5){
                a[0]+=1;
            }else if(x==10){
                if(a[0]>=1){
                    a[1]+=1;
                    a[0]-=1;
                }else{
                    check++;
                }
            }else{
                if(a[1]>=1){
                    a[2]+=1;
                    a[1]-=1;
                }else if(a[0]>=2){
                    a[2]+=1;
                    a[0]-=2;
                }else{
                    check++;
                }
            }
        }
        if(check==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
