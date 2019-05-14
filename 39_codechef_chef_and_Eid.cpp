//
//  main.cpp
//  CODE-CHEF
//
//  Created by Prince  Kumar on 14/05/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//
// ---- ** Chef and Eid ** ------

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int T;cin>>T;
    while(T--)
    {
        int n ; cin>>n;
        vector<int > v;
        for(int i=0;i<n;i++)
        {
            // cin>>v[i];
            int x; cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        // sort
        
        vector<int> res;
        for(int i=0;i<n-1;i++)
        {
            res.push_back(v[i+1]-v[i]);
        }
        sort(res.begin(),res.end());
        cout<<res[0]<<endl;
        
        
    }
}

