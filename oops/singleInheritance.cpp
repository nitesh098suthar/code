#include<iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class A {

//parent class super class base class

    public: 
        int a;
        int b;
        int c;
};

class B : public A{

// B => child, derived, subclass

    public: 
        int d;


};

int main()
{

  B obj;

  obj.a = 4;
  cout<< obj.a;  

    return 0;
}