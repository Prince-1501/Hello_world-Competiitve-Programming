//
//  COMPETITIVE PROGRAMMING .cpp
//
//  Created by Prince  Kumar on 15/06/2020.
//  Copyright © 2020 Prince  Kumar. All rights reserved.
//
//                       ---** COMPETITIVE PROGRAMMING in C++ **---
//                            ---** PRACTICE CODING SKILLS **---
//                                   ---** CHEF AND STRING **---


#include <iostream>
using namespace std;
int main(){
    int T; cin>>T;
    while(T--){
        string s; cin>>s;
        int n = (int)s.size();
        int i=0;
        int count=0;
        // 0 1 2 3 4 5    i=5
        while(i<n){
            if(s[i]!=s[i+1] && (i+1)<n){
                count++;
                i+=2;
            }else{
                i++;
            }
        }
        cout<<count<<endl;
    }
}
