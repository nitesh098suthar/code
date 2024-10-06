#include <iostream>
using namespace std;
int stair(int n)
{
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }
    return stair(n-2)+stair(n-1);
}
int main()
{
    int x;
    int y;
    cout << "Enter the no. of stairs " << endl;
    cin >> x;
    cout<<stair(x);
    return 0;
}
//optimaized solution can be possible too