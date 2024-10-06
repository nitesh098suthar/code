#include<iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class A {

//parent class super class base class

    public: 
        int a = 56;
        int b = 56;
        int c = 56;
};

class B : public A{

// B => child, derived, subclass

    public: 
        int d;


};

class C : public B{

    public: 
        int e, f;


};



int main()
{

    B obj;

    obj.d = 100;
    cout<<obj.d;

    return 0;
}