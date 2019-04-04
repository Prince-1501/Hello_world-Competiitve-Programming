//
//  main.cpp
//  lecture 31
//
//  Created by Prince  Kumar on 04/04/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//
// --- * Check the number is power of 2 * --- //
#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter the number "<<endl;
    int x;
    cin>>x;
    int a = x & (x-1);
    if(a==0)
        cout<<"Number is the power of 2"<<endl;
    else
        cout<<"Number is NOT the power of 2"<<endl;
        
}
