#include<iostream>
using namespace std;
int sum = 0;
int getSum(int *arr, int size)
{
    if(size==0)
    {
        return sum;
    }
    sum +=arr[0];
   return getSum(arr+1, size-1);
}
int main()
{
    int arr[5] = {0,1,2,3,4};
    int size = 5;
    int answer = getSum(arr, size);
    cout<<"the sum is "<<answer;
    return 0;
}