//
//  main.cpp
//  test1
//
//  Created by Prince  Kumar on 06/10/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//

//                                 **-- October Long Challenge --**
//                                       **-- Phone prices --**

#include <iostream>
using namespace std;
int main()
{
    int T; cin>>T;
    while(T--)
    {
        int n; cin>>n;
        int a[n+1]; for(int i=1;i<=n;i++){cin>>a[i];}
        // we have now prices on respective days
        int count=1;
        for(int i=2;i<=n;i++)
        {
            int price = a[i];
            if(i==2)
            {
                if(price<a[i-1])
                    count++;
            }
            else if(i==3)
            {
                if(price<a[i-1] && price<a[i-2])
                    count++;
            }
            else if(i==4)
            {
                if(price<a[i-1] && price<a[i-2] && price<a[i-3])
                    count++;
            }
            else if(i==5)
            {
                if(price<a[i-1] && price<a[i-2] && price<a[i-3] && price<a[i-4])
                    count++;
            }
            else
            {
                if(price<a[i-1] && price<a[i-2] && price<a[i-3] && price<a[i-4] && price<a[i-5])
                    count++;
            }
        }
        cout<<count<<endl;
    }
}
