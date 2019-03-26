
// ** -- code of "Studying alphabet " --Code chef -- **
#include <iostream>
using namespace std;
int main()
{
    string s; cin>>s;
    int a[26]={0}; // we put the value 0 in all the blocks
    int len = (int)s.size();  // length of string
    for(int i=0;i<len;i++)
    {
        char x = s[i]; // lets suppose x ='c'
        int p = int(x); // p =99
        p = p-97;  // index of that character // p =2
        a[p]=1;
    }
    int n; cin>>n;
    for(int i=0;i<n;i++)
    {
        int count=0;  // no. of charcter that not present in string s
        string k; cin>>k;  // k--> words
        for(int j=0;j<k.size();j++)
        {
            char z = k[j]; // let's supose z= 'f'
            int h = int(z);  // h=102
            h = h-97;  // h=5
            if(a[h]==0)
                count++;
            else
                count=count;
        }
        if(count>0)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
        
    }
}
