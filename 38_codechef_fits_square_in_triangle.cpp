//
//  main.cpp
//  CODECHEF
//
//  Created by Prince  Kumar on 14/05/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//   --- **  Fits square in the triangle ** ---

#include <iostream>
using namespace std;
int main()
{
    int T; cin>>T;
    while(T--)
    {
        int b; cin>>b;
        if(b==1 || b==2 ||b==3)
            cout<<"0"<<endl;
        else
        {
            if(b%2==0)  // for EVEN
            {
                int area = 0.5 * b *b;
                int res =  (area - b )/4;
                cout<<res<<endl;
            }
            else   // for ODD
            {
                b=b-1;
                int area = 0.5 * b *b;
                int res =  (area - b )/4;
                cout<<res<<endl;
            }
               
        }
    }
}
