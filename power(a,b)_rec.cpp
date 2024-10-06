#include<iostream>
using namespace std;

int power1(int base, int power)
{
    if(power == 0)
    {
        return 1;
    }
    if(power == 1)
    {
        return base;
    }
    if(power%2==0)
    {
        return power1(base, power/2)*power1(base, power/2);
    }
    else
    {
        return base * power1(base, power/2) * power1(base, power/2);
    }
}
int main()
{
    int base;
    int power;
    cout<<"Enter the base: "<<endl;
    cin>>base;
    cout<<"Enter the power: "<<endl;
    cin>>power;
    int answer = power1(base, power);
    cout<<"Here is the answer: "<<answer;
    return 0;
}