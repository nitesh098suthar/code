#include<iostream>
using namespace std;

bool palindrome(string &str, int start, int end)
{
    if(start>end)
    {
        return true; 
    }
    if(str.at(start)!=str.at(end))
    {
        return false;
    }
    palindrome(str, start+1, end-1);
}
int main()
{
    string str= "111121111";
    int start=0;
    int end=str.length()-1;
    bool ans=palindrome(str, start, end);
    if(ans)
        cout<<"Palindrome";
    else  
        cout<<"Not a Palindrome"<<endl;
    return 0;
}
