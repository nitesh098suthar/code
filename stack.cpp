#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> v1;
    v1.push(23);
    v1.push(24);
    v1.push(25);
    while(!v1.empty())
    {
        int top =v1.top();
        cout<<top<<endl;
        v1.pop();
    }
    return 0;   
}