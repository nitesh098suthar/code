#include<iostream>
using namespace std;

bool isSorted(int *arr, int size)
{
    if(size==0||size==1)
    {
        return true;
    }
    if(arr[0]>arr[1])
    {
        return false;
    }
    else
    {
       isSorted(arr+1,size-1);
        
        // bool remainingPart = isSorted(arr+1,size-1);
        // return remainingPart;
    }
}
int main()
{
    int arr[] = {1,23,43,54,112,323};
    int ans=isSorted(arr, 6);
    if(ans)
        cout<<"Shorted"<<endl;
    else
        cout<<"Not Shorted"<<endl;
    return 0;
}