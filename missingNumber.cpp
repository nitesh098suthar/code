#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int missingNumber()
{

    int arr[] = {1, 2, 3};
    int actualSize = 4;
    int actualSum = (actualSize*(actualSize+1))/2;
    int arrSum= 0;
    for(int i=0; i<3; i++)
    {
        arrSum+=arr[i];
    }
    return actualSum-arrSum;
    
}

int main()
{
    int ans = missingNumber();
    cout<<"Missing No. is "<<ans<<endl;
    return 0;
}
// int missingNumber()
// {

//     int arr[] = {1, 2, 3};

//     sort(begin(arr), end(arr));

//     for(int i=0; i<4; i++)
//     {
//         if(arr[i] != i+1)
//         {
//             return i+1;
//         }

//     }
//     return -1;
// }

// int main()
// {
//     int ans = missingNumber();
//     cout<<"Missing No. is "<<ans<<endl;
//     return 0;
// }