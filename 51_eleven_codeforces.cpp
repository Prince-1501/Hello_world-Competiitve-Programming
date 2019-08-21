//
//  main.cpp
//  eleven
//
//  Created by Prince  Kumar on 21/08/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//

//.      PROBLEMS --> ELEVEN from Codeforces

#include <iostream>
#include <cstring>
#define ll long long
using namespace std;
int main()
{
    ll int a[20]={0}; // store fibonacci series
    a[0]=a[1]=a[2]=1;
    for(int i=3;i<20;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    //cout<<a[19]<<endl;
    // 1 1 2 3 5 8 ...  if n==10
    int n; cin>>n;
    int b[n+1]; memset(b,0,sizeof(b));
    
    
    // 1 represent 'O'
    // 0 represent 'o'
    for(int i=1;i<20;i++)
    {
        if(a[i]<=n)
        {
            b[a[i]]=1;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(b[i]==1)
            cout<<"O";
        else
            cout<<"o";
    }
    cout<<endl;
    
}



