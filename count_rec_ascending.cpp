#include<iostream>
using namespace std;
void count(int n)
{
    if(n)
    {
        count(n-1);
    }
    cout<<n<<endl<<endl;
}
int main()
{
    int x;
    cout<<"Enter the value of x"<<endl;
    cin>>x;
    count(x);
    return 0;
}