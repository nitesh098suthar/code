#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {1,0};

    int n = sizeof(arr) / sizeof(arr[0]);

    int i = 0;
    int j = 0;

    while (i < n)
    {

        if(arr[i] != 0 )
        {
            i++;
        }
        else
        {
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }

    return 0;
}
