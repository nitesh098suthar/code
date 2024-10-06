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
        }
};
class y
{
    protected:
        int y;
    public:
        void gety()
        {
            y=50;
        }
};
class merge : public x, public y
{
    int c;
    public: 
        
        void add()
        {
            getx();
            gety();
            c=x+y;
            cout<<endl<<"The addition is : "<<c<<endl;
        }
};
int main()
{
    merge m1;
    m1.add();
    return 0;
}