#include <iostream>
using namespace std;

void print(int *arr, int size)
{
    cout << "Here is the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

void merge(int *arr, int start, int end)
{
    int mid = start + (end - start) / 2;
    cout << endl;
    cout << "------this array----" << endl;
    print(arr, end - start + 1);
    cout<<endl;
    cout << "Start" << start << endl;
    cout << "mid" << mid << endl;
    cout << "end" << end << endl;
    cout << endl
         << endl;
    int len1 = mid - start + 1;
    cout << "len1  " << len1 << endl;

    int len2 = end - mid;
    cout << "len2  " << len2 << endl<<endl;
    int *ptr1 = new int[len1];
    int *ptr2 = new int[len2];

    int indexMainArray = start;
    cout<<endl<<"indexmainarray  "<<indexMainArray<<endl;
    for (int i = 0; i < len1; i++)
    {
        ptr1[i] = arr[indexMainArray++];
    }
    cout<<endl<<"indexmainarray  "<<indexMainArray<<endl;
    for (int i = 0; i < len2; i++)
    {
        ptr2[i] = arr[indexMainArray++];
    }
    cout<<endl<<"indexmainarray  "<<indexMainArray<<endl;
    cout<<endl;

    cout << "ptr one" << endl;
    print(ptr1, len1);
    cout << "ptr two" << endl;
    print(ptr2, len2);
    int index1 = 0;
    int index2 = 0;

    indexMainArray = start;

    while (index1 < len1 && index2 < len2)
    {
        if (ptr1[index1] > ptr2[index2])
        {
            arr[indexMainArray++] = ptr2[index2++];
        }
        else
        {
            arr[indexMainArray++] = ptr1[index1++];
        }
    }
    while (index1 < len1)
    {
        arr[indexMainArray++] = ptr1[index1++];
    }
    while (index2 < len2)
    {
        arr[indexMainArray++] = ptr2[index2++];
    }

    cout << endl;
    cout << "Array after a step: " << endl;
    print(arr, end - start + 1);
}
void mergeSort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, end);
}

int main()
{
    int arr[9] = {5, 3, 6, 12, 2, 88, 121, 32, 0};
    int start = 0;
    int end = 8;
    mergeSort(arr, start, end);
    print(arr, end + 1);
    return 0;
}