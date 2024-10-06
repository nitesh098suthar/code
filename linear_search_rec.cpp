#include<iostream>
using namespace std;

bool isFound(int *arr, int size, int key)
{
    if(size==0)
    {
        return false;
    }
    if(arr[0] == key)
    {
        return true;
    }
    else
    {
        return isFound(arr+1, size-1, key);
    }
}
int main()
{
    int arr[5] = {23,423,34,242,22};
    int size = 5;
    int key;
    cout<<"Enter the key value"<<endl;
    cin>>key;
    bool ans = isFound(arr, size, key);
    if(ans==1)
    {
        cout<<"found"<<endl;
    }
    else
    {
        cout<<"Not Found";
    }
    return 0;
}