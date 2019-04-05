//
//  main.cpp
//  lecture 33
//
//  Created by Prince  Kumar on 05/04/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//  -- **  code of  --> Check the ith bit is set in the binary form of given number ** --- //

#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter the number : "<<endl;
    int n ; cin>>n;
    bool  a = n & ( 1<<3);
    if(a==true)
        cout<<"Yes, bit is set"<<endl;
    else
        cout<<"No,  bit is not set"<<endl;
        
}
