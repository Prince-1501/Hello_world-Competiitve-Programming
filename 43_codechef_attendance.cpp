//
//  main.cpp
//  CODE-CHEF
//
//  Created by Prince  Kumar on 18/05/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//
// ------- ** Attendance ** --------- //

#include <iostream>
using namespace std;
int main()
{
    int T;cin>>T;
    while(T--)
    {
        int n; cin>>n;
        string f[n];
        string l[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>f[i]>>l[i];  // first name and last name
        }
        
        int a[n];
        for(int i=0;i<n;i++){a[i]=0;}
        
        // initalise the array - a --> to 0
        
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(f[i]==f[j])
                {a[i]++; a[j]++;}
            }
        }
        
        // we check the condition on array a
        
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                cout<<f[i]<<endl;
            }
            else
            {
                cout<<f[i]<<" "<<l[i]<<endl;
            }
        }
    }
}






