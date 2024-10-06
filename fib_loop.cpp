#include <iostream>
using namespace std;
void fib(int n)
{
    int p=0;
    int i=1;
    int j=1;
    int loop=2;
    int ans;
    cout<<p<<"\t"<<i<<"\t"<<j<<"\t";
    while(loop<n)
    {
        ans = i+j;
        cout<<ans<<"\t";
        j=i;
        i=ans;
        loop++;
    }
}
int main()
{
    int x;
    int y;
    cout << "How many digit you want in the fibonacci series? " << endl;
    cin >> x;
    fib(x);
    return 0;
}
//optimaized solution can be possible too