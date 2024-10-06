#include<iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class A {

    private: 
            int x;
            int y;

            void sum(){
                cout<<"hello";
            }

    public: 
        int set(int a, int b)
        {
            x = a;
            y = b;
            return x+y;
        }

        void div()
        {
            cout<<"this is public function : "<<endl;
            sum();
        }


};

int main()
{
    A obj;
    int sum = obj.set(4, 5);
    obj.div();
    return 0;
}