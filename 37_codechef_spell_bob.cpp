//
//  main.cpp
//  Lecture 37
//
//  Created by Prince  Kumar on 17/04/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//
//                      CODE-CHEF

//       --- **    Problems on Spell bob   ** ---       //


#include <iostream>
using namespace std;
int main()
{
    int T; cin>>T;
    while(T--)
    {
        string s1,s2; cin>>s1>>s2;
        int a[3]={0};  // b count
        for(int i=0;i<3;i++)  // 'b' present  or not
        {
            if(s1[i]=='b' || s2[i]=='b')
                a[i]=1;
        }
        int b_count=0;
        for(int i=0;i<3;i++)
        {
            if(a[i]==1)
                b_count++;
        }
        if(b_count<=1)
            cout<<"no"<<endl;
        else if(b_count==2)
        {
            int index=0;
            for(int i=0;i<3;i++)
            {
                if(a[i]==0)
                    index=i;
            }
            if(s1[index]=='o' || s2[index]=='o')
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;
        }
        else if(b_count==3)
        {
            int o_count=0;
            for(int i=0;i<3;i++)
            {
                if(s1[i]=='o' || s2[i]=='o')
                    o_count++;
            }
            if(o_count==0)
                cout<<"no"<<endl;
            else
                cout<<"yes"<<endl;
        }
    }
}


