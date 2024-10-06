#include<iostream>
using namespace std;

void input(int arr[],int size)
{
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
}
void output(int arr[], int size)
{
    cout<<"Your entered array is: "<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<< "  ";
    }
}
void bubbleSort(int arr[], int start, int end)
{
    for(int i=0; i<end-1; i++)
    {
        for(int start=0; start<end-i; start++)
        {
            if(arr[start]>arr[start+1])
            {
                swap(arr[start],arr[start+1]);
            }
        }
    }
}
int main()
{
    int arr[100];
    int size;
    cout<<"Enter the size of the array:"<<endl;
    cin>>size;
    input(arr, size);
    output(arr, size);
    bubbleSort(arr, 0, size);
    cout<<"Here is the sorted array"<<endl;
    output(arr, size);
    return 0;
}