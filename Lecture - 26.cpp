//
//  main.cpp
//  hsgts
//
//  Created by Prince  Kumar on 29/03/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//   Chef and his daily routine Problem Code: CHEFROUT

#include <iostream>
using namespace std;
int main()
{
    int T; cin>>T;
    while(T--)
    {
        string s; cin>>s;
        int count=0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]=='C')
            {
                if(s[i+1]=='E' ||s[i+1]=='S' || s[i+1]=='C')
                    count++;
            }
            else if(s[i]=='E')
            {
                if(s[i+1]=='S' || s[i+1]=='E')
                    count++;
            }
            else if(s[i]=='S')
            {
                if(s[i+1]=='S')
                    count++;
            }
        }
        if(count==s.size()-1)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
}
