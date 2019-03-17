//
//  main.cpp
//  lecture -17
//
//  Created by Prince  Kumar on 17/03/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int T; cin>>T;
    while(T--)
    {
        int a,b,c,d; cin>>a>>b>>c>>d;
        if((a==c && b==d)|| (a==b && c==d)||(a==d && c==b))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
