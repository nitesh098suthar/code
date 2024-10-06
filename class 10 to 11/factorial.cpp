#include<iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout<< "Enter the value of n"<<endl;
    cin>> n;

    int answer = 1;

    for(int i = 1; i<=n; i++)
    {
        answer = i * answer;
    }
    cout<<answer;



    return 0;
}