//
//  main.cpp
//  CODE-CHEF
//
//  Created by Prince  Kumar on 15/05/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//
// ---- ** chef judges a competition ** --- //


#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int T;cin>>T;
    while(T--)
    {
        int n; cin>>n;
        int a[n] ; // for ALICE
        int b[n] ; // for BOB
        
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        
        // sorting in ARRAY
        sort(a,a+n);
        sort(b,b+n);
        
        int suma =0;
        int sumb = 0;
        
        for(int i=0;i<n-1;i++)
        {
            suma = suma + a[i];
            sumb = sumb + b[i];
        }
        // we get sum results
        
        if(suma==sumb)
            cout<<"Draw"<<endl;
        else if( suma < sumb)
            cout<<"Alice"<<endl;
        else
            cout<<"Bob"<<endl;
        
    }
}







