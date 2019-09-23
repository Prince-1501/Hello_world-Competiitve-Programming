//
//  main.cpp
//  fibonacciii
//
//  Created by Prince  Kumar on 23/09/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//
//  code of Easy Fibonacci

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int T; cin>>T;
    while(T--)
    {
        long long int x; cin>>x;
        long long int z = log2((long double)x);
        if(z==0)
            cout<<"0"<<endl;
        else if(z==1)
            cout<<"1"<<endl;
        else
        {
            int a = z%4;
            if(a==2)
                cout<<"2"<<endl;
            else if(a==3)
                cout<<"3"<<endl;
            else if(a==0)
                cout<<"0"<<endl;
            else if(a==1)
                cout<<"9"<<endl;
        }
    }
}




