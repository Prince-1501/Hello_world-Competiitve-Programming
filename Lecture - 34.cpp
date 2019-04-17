//
//  main.cpp
//  Lecture 34
//
//  Created by Prince  Kumar on 17/04/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//   -- * Problems from codechef -> Train Partner -- ANKTRAIN * -//

#include <iostream>
using namespace std;
int main()
{
    int T; cin>>T;
    while(T--)
    {
        int n; // berth number
        cin>>n;
        if(n%8==0)
        {cout<<n-1<<"SL"<<endl;}
        else if(n%8==7)
        {cout<<n+1<<"SU"<<endl;}
        else if(n%8==1)
        {cout<<n+3<<"LB"<<endl;}
        else if(n%8==4)
        {cout<<n-3<<"LB"<<endl;}
        else if(n%8==2)
        {cout<<n+3<<"MB"<<endl;}
        else if(n%8==5)
        {cout<<n-3<<"MB"<<endl;}
        else if(n%8==3)
        {cout<<n+3<<"UB"<<endl;}
        else if(n%8==6)
        {cout<<n-3<<"UB"<<endl;}
    }
}
