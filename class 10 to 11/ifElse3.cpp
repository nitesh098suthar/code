#include<iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    
    int age;
    cin>>age;

    if(age <= 16)
        cout<<"you are assigned 1";
    else if(age >= 17 && age<= 20)
        cout<<"you are assigned 2";
    else
        cout<<"you are assigned 3";
    return 0;
}