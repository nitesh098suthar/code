#include<iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int palindrome(int start, int end, string s)
{
    if(s.empty())
    {
        return 1;
    }
    while(start <= end)
    {
        if(s[start] != s[end])
        {
            return 0;
        }
        start++;
        end--;

    }
    return 1;
    
}

int main()
{

    string s = "121221";
    int start = 0;
    int end = s.length()-1;
    int ans = palindrome(start, end, s );
    cout<<ans;
    return 0;
}