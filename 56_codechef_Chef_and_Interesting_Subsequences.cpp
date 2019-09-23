//
//  main.cpp
//  code
//
//  Created by Prince  Kumar on 23/09/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//
//  code of Chef and Interesting Subsequences
//  ** --- September long challenge  -- ** //

#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
ll int gcd(ll int a, ll int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
void nCr(int n, int r)
{
    
    // p holds the value of n*(n-1)*(n-2)...,
    // k holds the value of r*(r-1)...
    long long p = 1, k = 1;
    
    // C(n, r) == C(n, n-r),
    // choosing the smaller value
    if (n - r < r)
        r = n - r;
    
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
            
            // gcd of p, k
            long long m = gcd(p, k);
            
            // dividing by gcd, to simplify product
            // division by their gcd saves from the overflow
            p /= m;
            k /= m;
            
            n--;
            r--;
        }
        
        // k should be simplified to 1
        // as C(n, r) is a natural number
        // (denominator should be 1 ) .
    }
    
    else
        p = 1;
    
    // if our approach is correct p = ans and k =1
    cout << p << endl;
}
int main()
{
    int T; cin>>T;
    while(T--)
    {
        vector<int> v;
        int n,k;cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int last_index_of_k = v[k-1];
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==last_index_of_k)
                count++;
        }
        // we get total number of last_element
        
        int num=0;
        for(int i=0;i<k;i++)
        {
            if(v[i]==last_index_of_k)
                num++;
        }
        nCr(count,num);  // countCnum
        
    }
}








