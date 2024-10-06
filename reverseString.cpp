#include<iostream>
using namespace std;
void reverse(string &s, int start, int end)
{
   if(start>end) 
   {
    return;
   }
    swap(s.at(start), s.at(end));

    reverse(s, start+1, end-1);

}
int main()
{
    string s = "water";
    int start = 0;
    int end = s.length()-1;
    reverse(s, start, end);
    cout<<s;
    return 0;
}