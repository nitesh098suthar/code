#include <iostream>
using namespace std;
int square(int n)
{
    return n*n;
}
int main()
{
    int x;
    cout << "Enter the value of x" << endl;
    cin >> x;
    int answer = square(x);
    cout<<"Answer  " <<answer<<endl;
    return 0;
}