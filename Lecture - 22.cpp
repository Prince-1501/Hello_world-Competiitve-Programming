// **--- program of print prime numbers ---**//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value of n upto which you want to print prime number : "<<endl;
    cin>>n;
    for(int i=2;i<=n;i++)   /// 10
    {
        int x = i;  // 10
        int count=0;
        for(int j=1;j<=x;j++)  // j=1 to j=10
        {
            if(x%j==0) // 10%2==0
                count++;
        }
        if(count==2)
            cout<<x<<endl;
    }
}
