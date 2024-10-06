// #include<iostream>
// #include <bits/stdc++.h>
// #include <vector>
// using namespace std;

// class Parent{
//     public:
//         int var_parent;
//         void display()
//         {
//             cout<<"this is from parent class"<<endl;
//         }

// };

// class Child : public Parent{
//      public:
//         int var_child;
//         void display1()
//         {
//             cout<<"this is from child class"<<endl;
//         }

// };

// int main()
// {

//     Child obj_chlid;
//     Parent obj_parent;

//     Parent * parent_class_pointer;

//     parent_class_pointer = &obj_chlid;

//     parent_class_pointer -> display();

//     return 0;
// }

#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base = 100;
    void display()
    {
        cout << "1 Dispalying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "2 Dispalying Base class variable var_base " << var_base << endl;
        cout << "2 Dispalying Derived class variable var_derived " << var_derived << endl;
    }
};

int main(){
   
    DerivedClass * derived_class_pointer;
    DerivedClass derived_obj;

    derived_class_pointer -> var_derived = 

    return 0;
}