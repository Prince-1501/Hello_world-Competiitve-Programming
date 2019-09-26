//
//  main.cpp
//  jdjd
//
//  Created by Prince  Kumar on 26/09/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//
//   --- codechef --> A-Books ---
#include <iostream>
using namespace std;
int main()
{
    int T; cin>>T;
    while(T--)
    {
        int n; cin>>n;
        int a[n];
        int b[1000001]={0};
        // in b[]  we store last index of elements
        for(int i=0;i<n;i++)  // i->index
        {
            int x; cin>>x;
            a[i]=x;
            b[x]=i;
            
//            cin>>a[i];
//            b[a[i]]=i;
        }
        for(int i=0;i<n;i++)
        {
            //cout<<n-1-b[a[i]]<<endl;
            int x = a[i];
            int last_index = b[x];
            cout<<n-1-last_index<<" ";
        }
        cout<<endl;
        
    }
}



