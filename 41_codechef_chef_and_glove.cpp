//
//  main.cpp
//  CODE-CHEF
//
//  Created by Prince  Kumar on 17/05/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//
//   ---- ** CHEF AND GLOVE ** ------- //


#include <iostream>
using namespace std;
int main()
{
    int T; cin>>T;
    while(T--)
    {
        int n; cin>>n;
        // numbering 1 to n
        
        int len[n+1];  // length of finger
        int glov [n+1]; // lenght of sheath
        
        for(int i=1;i<n+1;i++)
        {
            cin>>len[i];
        }
        for(int i=1;i<n+1;i++)
        {
            cin>>glov[i];
        }
        
        // front
        int front=0;
        for(int i=1;i<n+1;i++)  // loop runs n times
        {
            if(len[i]<=glov[i])
                front++;
        }
        
        // back
        int back=0;
        for(int i=1;i<n+1;i++)
        {
            if(len[i]<=glov[n+1-i])  // i=1 --> 8+1-1 = 8
                back++;                // i=2  --> 8+1-2 =7
        }
        
        if(front==n && back==n)
        {
            cout<<"both"<<endl;
        }
        else if(front!=n && back!=n )
            cout<<"none"<<endl;
        else if(front==n && back!=n)
            cout<<"front"<<endl;
        else if( front!=n && back ==n)
            cout<<"back"<<endl;
    }
}








