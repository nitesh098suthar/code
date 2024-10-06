#include<iostream>
using namespace std;
bool reverse(string &s, int start, int end)
{
   if(start>=end) 
   {
    return true;
   }
   if(s.at(start)!=s.at(end))
   {
        return false;
   }
   else
   {
      reverse(s, start+1, end-1);
   }


}
int main()
{
    string s = "121221";
    int start = 0;
    int end = s.length()-1;
    int answer = reverse(s, start, end);
    if(answer)
    {
        cout<<"Palindorme";

    }
    else
    {
        cout<<"not a palindorme";
    }
    return 0;
}