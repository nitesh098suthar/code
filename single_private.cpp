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
class B : private A
{
    private:
        int c;
    public:
        int get_b();
        void mul();
        void display();
};

void A :: setData()
{
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
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
    setData();
    c=b*get_a();
    cout<<"Multiplication: "<<c<<endl;
}
void B :: display()
{
    show_a();
    cout<<"b: "<<b<<endl;
    cout<<"c: "<<c<<endl;
}

int main(void)
{
    B b1;
    // b1.setData();
    // b1.get_a();
    // b1.show_a();
    //above three function cant access by the object of the B class(because its derived class from A base class)
    b1.mul();
    b1.display();
    cout<<"\n\n\n";
    b1.mul();
    b1.display();

    return 0;
}