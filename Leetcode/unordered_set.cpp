#include<bits/stdc++.h>
#include<unordered_set>

using namespace std;
int main(){

    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    
    for(auto it = s.begin() ; it!=s.end() ;it++)
        cout<<(*it)<<endl;
    
    cout<<"number of element : "<<s.size()<<endl;

    s.clear();
    cout<<"number of element : "<<s.size()<<endl;


    int key = 20;

    if(s.find(key) == s.end()){
        cout<<"key not found"<<endl;
    }else{
        
        auto temp = s.find(key);
        s.erase(temp);

    }

    int deleted_key = 25;
    s.erase(deleted_key);

    for(auto it = s.begin() ; it!=s.end() ;it++)
        cout<<(*it)<<endl;

    cout<<"number of element : "<<s.size()<<endl;


    if(s.find(key)!=s.end())
        cout<<"key found"<<endl;


    if(s.count(5))
        cout<<"key found"<<endl;
    else
        cout<<"not found"<<endl;
}
