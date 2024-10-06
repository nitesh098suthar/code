#include<iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class A {

    public: 
        int a;

    void operator+ ( A obj)
    {
        int value1 = this->a ;
        int value2 = obj.a;

        cout<<"Answer of the and b is : "<< value1 - value2;
    }

    void operator() ()
    {
        cout<<"\nhello "<<this->a;

    }
};

int main()
{
    A obj1, obj2;

    obj1.a = 10;
    obj2.a = 20;

    obj1+obj2;

    obj1();
    return 0;
}