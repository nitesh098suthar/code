#include<iostream>
using namespace std;

bool search(int *arr, int start, int end, int key)
{
    
    if(start>end)
    {
        return false;
    }
    int mid=start+(end-start)/2;
    if(arr[mid]==key)
    {
        return true;
    }
    if(arr[mid]<key)
        return search(arr, mid+1, end, key);
    else
        return search(arr, start, mid-1, key);
}
int main()
{
    int arr[] = {1,23,43,54,112,01,323};
    int start=0;
    int end=5;
    int key=1;
    int ans=search(arr, start, end, key);
    if(ans)
        cout<<"Found"<<endl;
    else
        cout<<"Not Found"<<endl;
    return 0;
}