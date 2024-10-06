#include<iostream>
using namespace std;
void bubbleSort(int arr[], int size)
{
    if(size==1 || size==0)
    {
        return;
    }
    for(int i=0; i<size-1; i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
    return bubbleSort(arr, size-1);
}
int main()
{
    int arr[]={12,121,1,22,9};
    int size = 5;
    int start=0;
    bubbleSort(arr, size);
    cout<<"Here is the sorted array"<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}