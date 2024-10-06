#include <iostream>
using namespace std;
int power(int n)
{
    if (n==0)
    {
        return 1;
    }
    return 2*power(n-1);
}
int main()
{
    int x;
    cout << "Enter the value of x" << endl;
    cin >> x;
    int answer = power(x);
    cout<<"Answer  " <<answer<<endl;
    return 0;
}