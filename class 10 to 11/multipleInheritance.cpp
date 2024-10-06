#include<iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class A{
    public:     
        int a = 23;
        int b = 5;
        int c = 53;

        void get()
        {
            cout<< "this is parent class";
        }
};

class X{
    public:     
        int a = 23;
        int b = 5;
        int c = 53;

        void get()
        {
            cout<< "this is parent class";
        }
};

class B : public A, public X{

    public:
        int a = 3333;
        int b = 5555;
        int c = 7777;

        void get()
        {
            cout<< "this is child class";
        }
};


int main()
{
    B object;
    cout<< object.A::a ;
    
    return 0;
}