#include<iostream>
using namespace std;


class Hero 
{
    public:
    Hero()
    {
        cout<<"Watter is cold"<<endl;
    }

    void nitesh()
    {
        cout<<"Nitesh is hoty"<<endl;
    }

    ~Hero()
    {
        cout<<"Destructor called"<<endl;
    }
};
int main()
{
    Hero h1;

    Hero *h2 = new Hero;

    h2->nitesh();

    delete h2;
    return 0;
}