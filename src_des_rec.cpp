#include <iostream>
using namespace std;
void destination(int n, int m)
{
    cout<<"Step " <<n<< " is taken"<<endl;
    if (n==m)
    {
        return ;
    }
   
    return destination(n+1, m) ;
}
int main()
{
    int x;
    int y;
    cout << "Enter the value of source" << endl;
    cin >> x;
    cout<< "Enter the value of destination "<<endl;
    cin>> y;
    destination(x, y);
    cout<<"reached"<<endl;
    return 0;
}