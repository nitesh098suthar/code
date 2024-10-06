#include<iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class A {

    public: 
        int a = 5556;
        int b = 56;
        int c = 56;
};

class B : public A{

    public: 
        int d;

};

class C : public A{

    public: 
        int e, f;

};



int main()
{

    B obj;

    // cout<<obj.c;

    C obj1;
    cout<< obj1.a;



    return 0;
}
