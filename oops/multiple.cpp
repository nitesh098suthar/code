#include<iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class A {

    public: 
        int a = 1;
        int b = 2;
        int c = 3;
};

class B{
    
    public: 
        int d = 4;


};

class C : public A, public B{

    public: 
        int e = 5;
        int f = 6;
        //int a b c d


};



int main()
{

    C obj;
    cout<<obj.a<<endl;
    cout<<obj.b<<endl;
    cout<<obj.c<<endl;
    cout<<obj.d<<endl;
    cout<<obj.e<<endl;
    cout<<obj.f<<endl;

    return 0;
}