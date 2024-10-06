#include<iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void sep(int arr[], int size)
{
    vector<int> vect;
    int index = 0;

    //pushing negative numbers in vector;
    for(int i=0; i<size; i++)
    {
        if(arr[i]>= 0)
        {
            vect.push_back(arr[i]);
            index++;
        }
    }
    
    //pushing positive numbers in vector;
    for(int i=0; i<size; i++)
    {
        if(arr[i] < 0)
        {
            vect.push_back(arr[i]);
        }
    }


    for(int i = 0; i<size; i++)
    {
        arr[i] = vect[i];
    }

}

int main()
{
    int arr[] = {2, 4, -32, 4, -43, -432, -34,-323};
    int size = sizeof(arr)/sizeof(arr[0]);

    sep(arr, size);
    return 0;
}