#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string s;
    //cin>>s;
    getline(cin,s);
    cout<<s<<endl;
    cout<<s[0]<<endl;
    cout<<s[1]<<endl;
    cout<<s[2]<<endl;
    cout<<s[3]<<endl;
    cout<<s[4]<<endl;
    
    // -- we want to extrat the words --
    stringstream str(s);
    string word;   // it stores the words present in the string s
    while(str>>word)
    {
        cout<<word<<endl;
    }
}
