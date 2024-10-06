#include<iostream>
using namespace std;
class x
{
    protected:
        int x;
    public:
        void getx()
        {
            x=5;
            cout<<"The value of x is: "<<x;
        }
};
class y
{
    protected:
        int y;
    public:
        void getx()
        {
            y=50;
            cout<<"The value of y is: "<<y;
        }
};
class merge : public x, public y
{
    int c;
    public: 
        
        void add()
        {
           //accessing getx of class x
            x::getx();
            //accessing getx of class y
            y::getx();
            cout<<endl<<"The addition is : "<<x::x+y::y<<endl;
        }
};
int main()
{
    merge m1;
    m1.add();
    return 0;
}