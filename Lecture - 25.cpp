//
//  main.cpp
//  hbhbhbs
//
//  Created by Prince  Kumar on 29/03/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//
// ** --- Euclidean Algorithm -- for finding GCD of 2 number **//

#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if(a==0)
        return b;
    else
        return gcd(b%a ,a);
    
}
int main()
{
    int a,b;
    cout<<"Enter two numbers "<<endl;
    cin>>a>>b;
    int result = gcd(a,b);
    cout<<result<<endl;
}
