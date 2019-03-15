//
//  main.cpp
//  lecture -16
//
//  Created by Prince  Kumar on 15/03/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//

#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    int T; cin>>T;
    while(T--)
    {
        int n; cin>>n;    // int n= 7929024
        ostringstream str1;
        str1<<n;
        string s = str1.str();
        
        // single char  'a', '3' ' $'
        // set of char == string  == "prince"  , "78292"
        // string  s = 7929024    k = 7
        // find the string size
        int count=0;
        int k = (int)s.size();
        for(int i=0;i<k;i++)
        {
            if(s[i]=='4')
                count++;
            else
                count=count;
        }
        cout<<count<<endl;
    }
}
