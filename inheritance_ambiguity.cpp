#include<iostream>
using namespace std;


class base1
{
    public:
    void func()
    {
        cout<<"water is cool"<<endl;
    }
};

class base2 
{
    public:
    void func()
    {
        cout<<"water is hot"<<endl;
    }
};

class child : public base1, public base2
{
    // public:
    // void func()
    // {
    //     cout<<"water is nothing"<<endl;
    // }
};


int main()
{
    child c1;

    c1.base1 :: func();
    // c1.base2 :: func();
    
    return 0;
}