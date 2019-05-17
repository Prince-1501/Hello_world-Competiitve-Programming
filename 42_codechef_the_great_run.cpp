//
//  main.cpp
//  CODE-CHEF
//
//  Created by Prince  Kumar on 17/05/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//
//  ------ ** The Great Run ** ---------- //

#include <iostream>
using namespace std;
int main()
{
    int T; cin>>T;
    while(T--){
        
        int n,k; cin>>n>>k;
        int a[n];  // no. of girls per km
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        // we get values of girls
        
        int max=0;
        for(int i=0;i<=n-k;i++)
        {
            int sum=0;
            for(int j=i;j<i+k;j++)
            {
                sum+=a[j];
            }
            if(max<sum)
                max=sum;
        }
        cout<<max<<endl;
        
    }
}




