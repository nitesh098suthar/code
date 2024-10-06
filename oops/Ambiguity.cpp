#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class A
{

public:
    int a = 1;

    void get()
    {
        cout << "this is from class A" << endl;
    }
};

class B
{

public:
    int a = 2;

    void get()
    {
        cout << "this is from class B" << endl;
    }
};

class C : public A, public B
{

public:
    int a = 3;
    // int a = 56;
    // int a = 56

    void get()
    {
        cout << "this is from class C" << endl;
    }
    // void get()
    // {
    //     cout<<"this is from class A"<<endl;
    // }
    // void get()
    // {
    //     cout<<"this is from class A"<<endl;
    // }
};

int main()
{

    C obj;

    // object_name.class_name :: variable_name;
    // object_name.class_name :: function_name;

    cout << obj.A ::a;

    return 0;
}
