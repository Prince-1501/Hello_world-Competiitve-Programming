//
//  main.cpp
//  lecture 45
//
//  Created by Prince  Kumar on 25/07/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//
// codechef question --** Uncle johny ** ---- //


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int T; cin>>T;
    while(T--)
    {
        int n; cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            v.push_back(x);
            // v.push_back(cin);
        }
        int k; cin>>k; // index of jhony unle song
        // vector use --> indexing start from 0
        int val  = v[k-1]; // uncle jhony
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            if(v[i]==val)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
}





