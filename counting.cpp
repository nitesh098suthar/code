#include<iostream>
using namespace std;

int main()
{
    int arr[50] = {43, 65, 51, 27, 79, 11, 56, 61, 82, 9, 25, 36, 7, 49, 55, 63, 74, 81, 49, 37, 40, 49, 16, 75, 87, 91, 33, 24, 58, 78, 65, 56, 76, 65, 45, 54, 36, 63, 12, 21, 73, 49, 51, 19, 39, 49, 68, 93, 85, 59 };

    int size = sizeof(arr)/sizeof(arr[0]);
    // cout<< size;
    cout<<"value between 0 to 9 : ";
    for(int i=0; i<50; i++)
    {
        
        if(arr[i] >= 0 && arr[i] <= 9)
        {
            cout<<arr[i] << " ";

        }

    }
    cout<<endl;
    cout<<"value between 10 to 19 : ";

    for(int i=0; i<50; i++)
    {
        
        if(arr[i] >= 10 && arr[i] <= 19)
        {
            cout<<arr[i] << " ";

        }

    }

    return 0;
}