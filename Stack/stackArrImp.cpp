#include<iostream>
using namespace std;

class Stack {

    public:
        int top;
        int size;
        int *arr;
    
    Stack(int size){
        this->size= size;
        arr = new int [size];
        top = -1;
    }

    void push(int ele){

        if(top > size-1)
        {
            cout<<"Stack is overflow"<<endl;
            return;
        }
        else
        {
            top++;
            arr[top]=ele;
            cout<<"inserted  " <<arr[top]<<endl;
            cout<<"top : "<<top<<endl<<endl;
            return;
        }

    }

    //back means top element of the stack

    void back()
    {
        if(top<0)
        {
            cout<<"stack is empty"<<endl;
            return;
        }
        else
        {
            cout<<"the top ele is : "<<arr[top]<<endl;
        }
    
    }

    void pop()
    {
        if(top<0)
        {
            cout<<"stack is empty, no ele for pop"<<endl;
            return;
        }
        else
        {
            cout<<"popped ele is :" << arr[top]<<endl;
            top--;
            // cout<<"now the top is on : " << arr[top]<<endl<<endl;
        }
    }

    //front means first element of the stack

    void front() 
    {
        if(top<0)
        {
            cout<<"stack is empty, no ele at first place "<<endl;
            return;
        }
        else 
        {
            cout<<"the front element is : "<<arr[0];
            return;
        }
    }


};


int main()
{
    Stack s(5);

    s.push(10);
    s.push(12);
    s.push(0);
    s.push(11);
    // s.push(12);
    // s.push(11);
    // s.push(11);
    // s.push(11);

    s.pop();
    s.pop();
    s.pop();
    s.back();
    s.front();

    return 0;
}