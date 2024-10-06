#include<iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Parent 
{

 
public:
        int a = 1;
        int b = 2;
        int c = 3;

        void setter(int a)
        {
            this  
        }

};

class Base : public Parent
{
    
};

int main()
{

    Base obj;
    // cout<< obj.d;

    cout<<obj.a<<endl;
    cout<<obj.b<<endl;
    cout<<obj.c<<endl;
    
    return 0;
}