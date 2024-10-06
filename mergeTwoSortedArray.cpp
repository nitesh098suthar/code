#include<iostream>
using namespace std;

void merging(int arr1[], int size1, int arr2[], int size2, int arr3[], int size3)
{
    int i=0, j=0, k=0;
    while(i<size1 && j<size2)
    {
        if(arr1[i]>arr2[j])
        {
            arr3[k]=arr2[j];
            j++;
            k++;
        }
        else
        {
            arr3[k]=arr1[i];
            i++;
            k++;
        }
    }
    while(i<size1)
    {
        arr3[k++]=arr1[i++];
    }
    while(j<size1)
    {
        arr3[k++]=arr2[j++];
    }
}

void print(int arr3[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr3[i]<<"   ";
    }
}
int main()
{
    int arr1[5]={1,2, 3, 4,5};
    int arr2[3]={3,54,443};
    int arr3[8]={0};
    int size3=8;
    merging(arr1, 5, arr2, 3, arr3, 8);
    cout<<"Here is the array:"<<endl;
    print(arr3, size3);

    return 0;
}