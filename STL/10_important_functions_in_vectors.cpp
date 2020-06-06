//
//  DATA STRUCTURES.cpp
//
//  Created by Prince  Kumar on 5/06/2020.
//  Copyright © 2020 Prince  Kumar. All rights reserved.
//
//                 ---** STANDARD TEMPLATE LIBRARY (STL) in C++ **---
//                         ---** PRACTICE CODING SKILLS **---


#include <iostream>
using namespace std;
int main(){
    int T; cin>>T;
    while(T--){
        int n;cin>>n;
        bool ans=true;
        int a[3]={0,0,0}; // 5 10 15
        for(int i=0;i<n;i++){
            int x; cin>>x;
            
            if(x==5){
                a[0]=a[0]+1;
            }
            
            if(x==10){
                if(a[0]>=1){
                    a[1]=a[1]+1;
                    a[0]=a[0]-1;
                }else{
                    ans=false;
                }
            }
            
            if(x==15){
                if(a[1]>=1){
                    a[2]=a[2]+1;
                    a[1]=a[1]-1;
                }else if(a[0]>=2){
                    a[2]=a[2]+1;
                    a[0]=a[0]-2;
                }else{
                     ans=false;
                }

            }
            
            if(ans==false){
                break;
            }
        }
        
        
        if(ans==true){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
