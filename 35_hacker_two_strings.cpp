//
//  main.cpp
//  Lecture 34
//
//  Created by Prince  Kumar on 17/04/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//
//                      HACKER EARTH

//       --- **    Problems on Two Strings   ** ---           //


#include <iostream>
using namespace std;
int main()
{
    int T; cin>>T;
    while(T--)
    {
        string s1,s2; cin>>s1>>s2;
        // declare array for s1 and s2;
        
        // for s1
        int a[26]={0};
        
        // for s2
        int b[26]={0};
        
        // length of string
        int k = (int)s1.size();
        
        for(int i=0;i<k;i++)
        {
            int x = s1[i]-97;  //  In c++ automatic data type conversion in char to int
            a[x]++;
            
            int y = s2[i]-97;
            b[y]++;
        }
        
        
        // we declare count
        int count=0;
        
        // we got completer array a and b
        
        for(int j=0;j<26;j++)
        {
            if(a[j]!=b[j])
                count++;
        }
        if(count==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}


