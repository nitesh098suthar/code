#include<iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {23,5,53,-43,0,-3,-35};

    int i=0;
    int j=0;
    int n = sizeof(arr)/sizeof(arr[0]);
    while(i<n)
    {
       if(arr[i]<0)
       {
            i++;
       } 
       else
       {
        swap(arr[i++], arr[j++]);
       }
    }
    
   for(int i=0; i<n; i++)
   {
    cout<<arr[i]<<" ";
   }
    return 0;
}