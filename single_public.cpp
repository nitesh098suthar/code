#include<iostream>
using namespace std;

class A
{
    private:
        int a;
    public:
        int b;
        void setData();
        int get_a();
        void show_a();
};
class B : public A
{
    private:
        int c;
    public:
        void mul();
        void display();
};

void A :: setData()
{
    a=5; 
    b=10;
}
int A :: get_a()
{
    return a;
}
void A :: show_a()
{
    cout<<"a from class a: "<<a<<endl;
}
void B :: mul()
{
    c=b*get_a();
    cout<<"Multiplication: "<<c<<endl;
}
void B :: display()
{
    cout<<"a: "<<get_a()<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"c: "<<c<<endl;
}

int main(void)
{
    B b1;
    b1.setData();
    b1.get_a();
    b1.show_a();

    b1.mul();
    b1.display();
    cout<<"\n\n\n";
    b1.b=100;
    b1.mul();
    b1.display();

    return 0;
}