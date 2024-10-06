/*

#include<iostream>
using namespace std;

int count =0;
int sum(int *arr, int size)
{
    count+=arr[0];
    // cout<<count<<endl;
    if(size<=1)
    {
        return arr[0];
    }
    return sum(arr+1, size-1);
}
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int size = 6;
    int ans = sum(arr, size);
    cout<<"Sum is: "<<count;
    return 0;
}

*/

//without using the global macro;

#include<iostream>
using namespace std;

int sum(int *arr, int size)
{
    // cout<<count<<endl;
    if(size<=1)
    {
        return arr[0];
    }
    return arr[0]+sum(arr+1, size-1);
}
int main()
{
    int arr[] = {1,2};
    int size = 2;
    int ans = sum(arr, size);
    cout<<"Sum is: "<<ans;
    return 0;
}