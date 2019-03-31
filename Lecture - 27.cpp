//
//  main.cpp
//  lecture 27
//
//  Created by Prince  Kumar on 31/03/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//  code of codechef problem - Two vs Ten

#include <iostream>
using namespace std;
int main()
{
    int T; cin>>T;
    while(T--)
    {
        int x; cin>>x;
        if(x%10==0)
            cout<<"0"<<endl;
        else if(x%5==0)
            cout<<"1"<<endl;  // 5*2 =10
        else
            cout<<"-1"<<endl;
    }
}
