#include <iostream>
using namespace std;
int fib(int n)
{
    if (n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
int main()
{
    int x;
    int y;
    cout << "We'll print the value at present x place in fibonacci series so type the value of x: "<< endl;
    cin >> x;
    int answer = fib(x);
    cout<<"Answer is : " <<answer;
    fib(x);
    return 0;
}