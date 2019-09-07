//
//  main.cpp
//  code
//
//  Created by Prince  Kumar on 07/09/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//
//  codeforces --> MUH and Sticks

#include <iostream>
using namespace std;
int main()
{
    int a[10]={0};
    for(int i=1;i<=6;i++)
    {
        int x; cin>>x;
        a[x]++;
    }
    
    int leg =0;
    int leg_value=0;
    for(int i=1;i<=9;i++)
    {
        if(a[i]>=4)
        {
            leg=1;
            leg_value=i;
            a[i]=a[i]-4;
            break;
        }
        
    }
    
    int body=0;
    int body_value=0;
    
    for(int i=1;i<=9;i++)
    {
        if(a[i]>=1)
        {
            body=1;
            body_value=i;
            a[i]=a[i]-1;
            break;
        }
        
    }
    
    int head=0;
    int head_value=0;
    
    for(int i=1;i<=9;i++)
    {
        if(a[i]>=1)
        {
            head=1;
            head_value=i;
            a[i]=a[i]-1;
            break;
        }
        
    }
    
    // we got leg leg_value / body body_value / head head_value
    
    if(leg==1 && body==1 && head==1)
    {
        if(leg_value!=head_value && leg_value!=body_value && head_value!=body_value)
            cout<<"Bear"<<endl;
        else if(body_value!=head_value && (leg_value!=head_value || leg_value!=body_value))
            cout<<"Bear"<<endl;
        else if(leg_value!=head_value && leg_value!=body_value && head_value==body_value)
            cout<<"Elephant"<<endl;
        else if(leg_value==head_value && leg_value==body_value && head_value==body_value)
            cout<<"Elephant"<<endl;
    }
    else
        cout<<"Alien"<<endl;
}
