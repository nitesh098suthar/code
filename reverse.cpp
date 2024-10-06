#include<iostream>
#include<string>
using namespace std;


string reverse(int i, int j, string str)
{
    
    while(i<j)
    {
        swap(str[i],str[j]);
        i++;
        j--;
    }
    return str;
}
int main()
{
    string str = "sumer";
    int i = 0;
    int j = str.length()-1;
    
    string str1 = reverse(i, j, str);
    cout<<str1;
    return 0;
}