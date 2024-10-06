#include<iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

pair<long long, long long> 

int main()
{
    long long arr[] = {3, 2, 1, 56, 1000, 167};
    int n = sizeof(arr)/sizeof(arr[0]);
    pair <long long, long long> answer = minMax(arr, n);
    return 0;
}