#include <iostream>
using namespace std;

class Stack
{
    public: 
        int size;
        int top;
        int last;
        int *arr;
        
    Stack(int size)
    {
        this->size = size;
        top = -1;
        this->last = size;
        arr = new int [size];
    }

    void push_front(int ele)
    {
        if(this->last-top<1)
        {
            cout<<"Stack is full"<<endl;
            return;
        }
        top++;
        arr[top] = ele;
        cout<<"the value of top is " << top<<endl;

    }
    void push_back(int ele)
    {
        if(this->last-top<1)
        {
            cout<<"Stack is full"<<endl;
            return;
        }
        last--;
        arr[last] = ele;
        cout<<"the value of last is " << last<<endl;
    }

};


int main() {
  
    Stack s(4);

    s.push_front(12);    
    s.push_front(12);    
    s.push_front(12);    
    s.push_back(10);    
    s.push_back(10);
    for(int i = 0 ; i<s.size; i++)
    {
        cout<<s.arr[i]<<"   ";
    }    
    return 0;
}