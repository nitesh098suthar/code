#include <iostream>
using namespace std;
int sum(int n)
{
    if (n==0)
    {
        return 0;
    }
    return n+sum(n-1);
}
int main()
{
    int x;
    cout << "Enter the value of x" << endl;
    cin >> x;
    int answer = sum(x);
    cout<<"Answer  " <<answer<<endl;
    return 0;
}