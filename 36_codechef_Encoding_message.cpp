//
//  main.cpp
//  Lecture 36
//
//  Created by Prince  Kumar on 17/04/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//
//                      CODE-CHEF

//       --- **    Problems on Encoding Message   ** ---       //


#include <iostream>
using namespace std;
int main()
{
    int T; cin>>T;
    while(T--)
    {
        int n; cin>>n; // lenght of string
        string s; cin>>s;
        
        // 1st step of encoding
        if(n%2==0)
        {
            // even
            for(int i=0;i<n;i=i+2)  // len= 6 ; index -> 0 to 5
            {
                char z = s[i+1];  // z='h'
                s[i+1] = s[i] ;  //
                s[i]=z;
            }
        }
        else
        {
            // odd
            for(int i=0;i<n-1;i=i+2)
            {
                char z = s[i+1];  // z='h'
                s[i+1] = s[i] ;  //
                s[i]=z;
            }
        }
        
        // 2nd stage of encoding
        
        for(int i=0;i<n;i++)
        {
            char c = s[i];   // recent character  // b --> 98
            //int index  =  s[i]-97;
            int index  =  c-97;   // 1
            int req = 25-index;   // 24
            
            //  range 97 to 122
            req = req + 97;
            char y = (char)req;  // real ASCII code
            cout<<y;
            
        }
        cout<<endl;
        
        
        
    }
}




