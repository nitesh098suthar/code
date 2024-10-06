//brute force is merge sort n(logn) time complextiy
//better solution but 0(2n) [it take 2 iteration from 0 to n so 0(2n)]
//best solution is Dutch flag sorting algorithm 0(n)


//better solution

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {1, 0, 1, 2, 1, 0, 0, 1, 0, 2, 2, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    int count_one = 0;
    int count_two = 0;
    int count_three = 0;

    for(int i = 0; i<size; i++)
    {
        if(arr[i] == 0)
        {
            count_one++;
        }
        else if(arr[i] == 1)
        {
            count_two++;
        }
        else
        {
            count_three++;
        }
    }
    cout<<"count 0 "<<count_one<<endl;
    cout<<"count 1 "<<count_two<<endl;
    cout<<"count 2 "<<count_three<<endl;

    for(int i =0; i<count_one; i++)
    {
        arr[i] = 0;
    }
    for(int i=count_one; i<count_two+count_one; i++)
    {
        arr[i] = 1;
    }
    for(int i=count_one+count_two; i<size; i++)
    {
        arr[i] = 2;
    }

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"  ";
    }

    return 0;
}