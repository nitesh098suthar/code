#include<iostream>
using namespace std;
void count(int n)
{
    cout<<n<<endl<<endl;
    if(n)
    {
        count(n-1);
    }
}
int main()
{
    int x;
    cout<<"Enter the value of x"<<endl;
    cin>>x;
    count(x);
    return 0;
}