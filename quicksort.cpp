#include<iostream>
using namespace std;
int partition(int *arr, int start, int end)
{
    int pivot = arr[start];

}
void quickSort(int *arr, int start, int end)
{
    //base 

    if(start >= end)
    {
        return;
    }

    int p = partition(arr, start, end);

    quickSort(arr, start, p-1);

    quickSort(arr, p+1, end);

}

int main()
{
    int arr[6] = {23,423,324,2,32,32};

    quickSort(arr, 0, 5);
    return 0;
}