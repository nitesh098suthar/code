#include <iostream>
using namespace std;

bool isFound(int *arr, int start, int end, int key)
{
    if (start > end)
    {
        return false;
    }
    int mid = start + (end - start) / 2;
    if (key == arr[mid])
    {
        return true;
    }
    else{

        if (key > arr[mid])
        {
            isFound(arr, mid + 1, end, key);
        }
        else if(arr[mid]>key)
        {
            isFound(arr, start, mid-1, key);
        }
    }
        
    
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 15, 17};
    int size = 8;
    int key;
    cout << "Enter key" << endl;
    cin >> key;
    int start = 0;
    int end = size - 1;
    bool answer = isFound(arr, start, end, key);
    if (answer)
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found";
    }
    return 0;
}