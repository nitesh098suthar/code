#include <iostream>
using namespace std;
void table(int n, int i)
{
    cout << n * i << endl;
    if (i == 10)
    {
        return;
    }
    table(n, i + 1);
}
int main()
{
    int x;
    cout << "Enter the value of x" << endl;
    cin >> x;
    
    table(x, 1);
    return 0;
}