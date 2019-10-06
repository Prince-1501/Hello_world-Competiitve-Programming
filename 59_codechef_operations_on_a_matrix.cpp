//
//  main.cpp
//  bbcfjc
//
//  Created by Prince  Kumar on 06/10/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//

//                              ***-- October Long Challeneg 2019 --***
/                                      ***-- Operations on a Matrix --****

#include <iostream>
#include <cstring>
#include <string>
#include <string.h>
#define ll long long
using namespace std;
int main()
{
    ll int T; cin>>T;
    while(T--)
    {
        ll int n,m,q;cin>>n>>m>>q;
        ll int a[n+1]; memset(a,0,sizeof(a)); // row
        ll int c[m+1]; memset(c,0,sizeof(c)); // column
        for(ll int i=0;i<q;i++)
        {
            ll int a1, a2;cin>>a1>>a2;
            a[a1]++; c[a2]++;
        }
        ll int odd=0,even=0,a_zero=0;
        for(ll int i=1;i<=n;i++)
        {// row
            
            if(a[i]>0)
            {
            if(a[i]%2!=0)
                odd++;
            else
                even++;
                
            }
            else
                a_zero++;
        }
        // for column
        ll int count=0;
        for(ll int i=1;i<=m;i++)
        {
            if(c[i]>0)
            {
                if(c[i]%2!=0)
                {
                    count+=even+a_zero;
                }
                else
                {
                    // even
                    count+=odd;
                }
            }
            else
                count+=odd;
        }
        cout<<count<<endl;
        
    }
}
