#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n==0)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int main()
{
    int x;
    cout << "Enter the value of x" << endl;
    cin >> x;
    int answer = factorial(x);
    cout<<"Answer  " <<answer<<endl;
    return 0;
}