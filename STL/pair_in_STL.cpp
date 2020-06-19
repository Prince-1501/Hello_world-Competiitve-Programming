//  DATA STRUCTURES.cpp
//
//  Created by Prince  Kumar on 19/06/2020.
//  Copyright © 2020 Prince  Kumar. All rights reserved.
//
//                 ---** STANDARD TEMPLATE LIBRARY (STL) in C++ **---
//                         ---** PRACTICE CODING SKILLS **---


#include <iostream>
#include <utility>
using namespace std;
int main(){
    pair<int, char> PAIR1;
    PAIR1.first = 100;
    PAIR1.second = 'G';
    
    cout<<PAIR1.first<<" "<<PAIR1.second<<endl;
    
    pair<string, double>PAIR2 ("prince" , 78.8);
    cout<<PAIR2.first<<" "<<PAIR2.second<<endl;
    
    pair<string, double>PAIR3;
    PAIR3 = make_pair("krishna", 90.3);
    cout<<PAIR3.first<<" "<<PAIR3.second<<endl;

    pair<int, int> pair1 = make_pair(1, 19);
    pair<int, int> pair2 = make_pair(2, 7);
    pair<int, int> pair3(pair2);  // we copied pair2 data in the pair3
    cout<<pair1.first<<" "<<pair1.second<<endl;
    cout<<pair3.first<<" "<<pair3.second<<endl;
    
    cout<<(pair1==pair2)<<endl;
    cout<<(pair1!=pair2)<<endl;
    cout<<(pair1 >= pair2)<<endl;
    cout<<(pair1 <= pair2)<<endl;

    // swapping of data in between pairs
    pair1.swap(pair2);
    cout<<pair1.first<<" "<<pair1.second<<endl;
    cout<<pair2.first<<" "<<pair2.second<<endl;

    

}

