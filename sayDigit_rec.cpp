#include <iostream>
using namespace std;
void sayDigit(char arr[], int n)
{   
    if(n==0)
    {
        return;
    }
    int rem=n%10;
    n=n/10;
    sayDigit(arr, n);
    cout<<arr[rem];
}
int main()
{
    char arr[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    int n;
    cout<<"Enter any value in digit form "<<endl;
    cin>>n;
    sayDigit(arr, n);
    return 0;
}
