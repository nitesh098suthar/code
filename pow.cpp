#include<iostream>
using namespace std;
int pow( int a, int b)
{
    if( b == 0)
    {
        return 1;
    }
    if ( b == 1 )
    {
        return a;
    }
    if(b%2 == 0)
    {
        //even 
        return (pow(a , b/2) * pow ( a, b/2));
    }
    else
    {
        //odd
        return (a * pow( a, b/2 ) * pow(a, b/2));
    }
}
int main()
{
    int a, b;
    cout<<"Ente the value of a and b"<<endl;
    cin>>a>>b;
    int answer = pow(a, b);
    cout<<"Answer is "<<answer;
    return 0;
}