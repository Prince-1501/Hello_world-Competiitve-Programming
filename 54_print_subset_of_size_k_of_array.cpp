//
//  main.cpp
//  subset
//
//  Created by Prince  Kumar on 09/09/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//
//      Print all subset of size 'k' of array of size 'n'

#include <iostream>
#include<vector>
#include <math.h>
#include <algorithm>
using namespace std;
int main()
{
    cout<<"Enter number of elemnets in array : "<<endl;
    int n; cin>>n;
    cout<<"Enter the size of subset : "<<endl;
    int k ; cin>>k;
    
    int a[n];
    cout<<"Enter the numbers : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<pow(2,n);i++)
    {
        vector<int> v;
        int x=i; // x=8
        while(x>0)
        {
            int z = x%2;  //  0  0  0   1
            v.push_back(z);
            x=x/2;  // 4  2  1 0
        }
        int p  = n- (int)v.size();
        for(int j=1;j<=p;j++)
        {
            v.push_back(0);
        }
        reverse(v.begin(), v.end());
        int count=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==1)
                count++;
        }
        if(count==k)
        {
            for(int i=0;i<v.size();i++)
            {
                if(v[i]==1)
                {
                    cout<<a[i]<<" ";
                }
            }
            cout<<endl;
        }
        v.clear();
        
    }
}
