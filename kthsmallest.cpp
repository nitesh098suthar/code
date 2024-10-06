#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int kthsmallest(int arr[], int k, int size)
{

    
    priority_queue<int> pq;

    for(int i=0; i<size; i++)
    {
        pq.push(arr[i]);
        if(pq.size()>k)
        {
            pq.pop();
        }
    }

    return pq.top();

}



int main()
{
    int arr[] = {7, 10, 4, 3, 20, 15};

    int k;
    cout<<"Enter the value fo k"<<endl;
    cin>>k;

    int size = sizeof(arr) / sizeof(arr[0]);

    int answer = kthsmallest(arr, k, size);
    cout<<answer;

    return 0;
}