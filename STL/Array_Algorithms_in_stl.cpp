//  DATA STRUCTURES.cpp
//
//  Created by Prince  Kumar on 26/06/2020.
//  Copyright © 2020 Prince  Kumar. All rights reserved.
//
//                 ---** STANDARD TEMPLATE LIBRARY (STL) in C++ **---
//                         ---** PRACTICE CODING SKILLS **---
//                  all_of | any_of | none_of | copy_n | iota


#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;
int main(){
    int a[6] = {2, 5 , -6, 7, 9,100};
//    int count=0;
//    for(int i=0;i<6;i++){
//        if(a[i]>=0){
//            count++;
//        }
//    }
    
    all_of(a, a+6, [](int x){ return x>0;}) ? cout<<"all elements of array is +ve"<<endl : cout<<"All elements of array is not necessary to be +ve"<<endl;
    
    any_of(a, a+6, [](int x){return x<0;}) ? cout<<"we have atleast one -ve element"<<endl : cout<<"All elements are +ve"<<endl;
    
    none_of(a, a+6, [](int x){return x==100;}) ? cout<<"we have none of element exactly is equal to 100 "<<endl : cout<<"It means we have atleast one element  = 100"<<endl;
    
    
    int arr1[6];
    copy_n(a, 6 , arr1);  // aaray  size  new_array
    for(int i=0;i<6;i++){cout<<arr1[i]<<" ";} //
    
    cout<<endl;
    int arr2[6]; // 2 3 4 5 6 7
    iota(arr2, arr2+6 , 20);
    for(int i=0;i<6;i++){cout<<arr2[i]<<" ";} //
    cout<<endl;

}
