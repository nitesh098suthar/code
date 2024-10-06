#include<iostream>
using namespace std;

int count(int n)
{
    int count=0;
    while(n)
    {
        int rem=n%10;
        n=n/10;
        count++;
    }
    return count;
}
int main()
{
    int x;
    cout<<"Enter digit beiby: "<<endl;
    cin>>x;
    int answer = count(x);
    cout<<"Digit count : "<<answer;
    return 0;
}