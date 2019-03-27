#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    // problem 1.
    /*int a[10]={0};
    cout<<a[5]<<endl;
    
    int b[10]={21};  // method wrong ... and luckily valid for only 0 (zero )
    cout<<b[5]<<endl;  */
    
    // problem 2.
   /* int n ; cin>>n;
    int a[n]={0};
    cout<<a[5]<<endl; */
    
    // solution of these problem
    // memset ()
    int n;
    cout<<"Input the size of array"<<endl;
    cin>>n;
    int a[n]; // block name --- a
    memset(a,0 ,sizeof(a));  // value --> 0 & -1
    cout<<a[4]<<endl;
    
    int val[9];
    memset(val, -1 , sizeof(val));
    for(int i=0;i<9;i++)
    {
        cout<<val[i]<<" ";
    }
    cout<<endl;
    
}
