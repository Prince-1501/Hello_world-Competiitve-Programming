//
//  main.cpp
//  lecture 32
//
//  Created by Prince  Kumar on 05/04/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//  -- ** code of COUNT THE THE NUMBER OF ONE'S IN THE BINARY REPRESENTATION OF GIVEN NUMBER ** --- //

#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter the number :"<<endl;
    int n; cin>>n;
    int x = n & (n-1);
    int count=1;
    while(x!=0)
    {
        count++;
        x = x & (x-1);
    }
    cout<<count<<endl;
    
    /*
     
     cout<<"Enter the number :"<<endl;
     int n; cin>>n;
     n = n & (n-1);
     int count=1;
     while(n!=0)
     {
     count++;
     n = n & (n-1);
     }
     
     
     */
}
