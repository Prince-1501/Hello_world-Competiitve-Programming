//
//  main.cpp
//  Two Buttons

//
//  Created by Prince  Kumar on 13/08/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//

///             TWO BUTTONS --> Code-forces

#include <iostream>
using namespace std;
int main()
{
    int n,m; cin>>n>>m;
    if(n>=m)
    { // 10  1
        cout<<n-m<<endl;
    }
    else
    {
        // back tracking
        int count=0;
        while(m>n)
        {
            if(m%2==0)
            {m/=2; count++;}
            else
            {
                m+=1; count++;
            }
        }
        cout<<count+(n-m)<<endl;
    }
}
