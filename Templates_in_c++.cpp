//
//  main.cpp
//
//  Created by Prince  Kumar on 03/05/2020.
//  Copyright © 2020 Prince  Kumar. All rights reserved.
//
//                      ---** TEMPLATES in C++ **---

#include <iostream>
using namespace std;
template <typename T>
//template <class T>

T MAX ( T a , T b){
    return a>b ? a : b;
}

template <class Y>
class boy {
public:
    Y name;
};
int main(){
    //cout<<add(3,4)<<endl;
    auto x = MAX<char>('a', 'c');
    cout<<x<<endl;
    
    boy<string> person;
    person.name="prince";
    cout<<(person.name)<<endl;
    
}
