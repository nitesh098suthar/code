#include<iostream>
using namespace std;
class X
{
    protected:
        int x;
    public:
        void getx()
        {
            x=5;
            cout<<"\n The value of x is: "<<x;
        }
};
class Y : public X
{
    protected:
        int y;
        // int x;
    public:
        void getx()
        {
            y=50;
            cout<<"\nThe value of y is: "<<y;
        }
};

int main()
{
    Y m1;
    //if not use scope resoultion operator with class then it will give priority to derived class member function.
    m1.getx(); 

    //this will exe the funtion of y class
    m1.Y::getx();


    //this will exe the function of class x
    m1.X::getx(); 
    return 0;
}