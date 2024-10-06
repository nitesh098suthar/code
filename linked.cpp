#include<iostream>
#include "preprocessor.cpp"
using namespace std;

int main()
{

    preprocessor p1(23,42);
    p1.printing();

    cout<<"After :"<<endl;

    preprocessor p2 = p1;
    p2.printing();

    return 0;

}