#include<iostream>
using namespace std;

bool search(int *arr, int size, int k)
{
    if(size==0)
    {
        return false;
    }
    if(arr[0]==k)
    {
        return true;
    }
    else
    {
       return search(arr+1,size-1, 54);
    }
}
int main()
{
    int arr[] = {1,23,43,54,112,323};
    int ans=search(arr, 6, 112);
    if(ans)
        cout<<"Found"<<endl;
    else
        cout<<"Not Found"<<endl;
    return 0;
}