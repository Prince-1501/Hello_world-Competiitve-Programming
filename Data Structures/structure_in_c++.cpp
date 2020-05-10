//
//  DATA STRUCTURES.cpp
//
//  Created by Prince  Kumar on 11/05/2020.
//  Copyright © 2020 Prince  Kumar. All rights reserved.
//
//                      ---** STRUCTURE & CLASSES in C++ **---

#include <iostream>
using namespace std;
struct student{
  
    int roll;
    string name;
    int age;
    
    void studentDetails(){
        cout<<"name is : "<<name<<endl;
        cout<<"age is : "<<age<<endl;
        cout<<"roll is : "<<roll<<endl;
    }
    
};
int main(){
    
//    struct student prince;
    student simran;
    student prince;
    prince.age= 21;
    prince.name = "prince";
    prince.roll = 44;
    
    struct student prateek = { 21, "prateek" ,20};
    
    prince.studentDetails();
    cout<<endl;
    prateek.studentDetails();
    cout<<endl;
    
    
}
