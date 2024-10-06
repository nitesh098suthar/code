#include<iostream>
using namespace std;

class Stack{
        int top;
        int *arr;
        int size; 
    public: 
        Stack(int size)
        {
            this -> size = size;
            this -> top = -1;
            arr = new int[size];
        }
        void push(int ele);
        int peek();
        void pop();
        bool isEmpty();

};

void Stack :: push(int ele){

    if(size-1 - top >= 1)
    {
        arr[++top] = ele;
        cout<<"element pushed : "<<ele<<endl;
    }
    else{
        cout<<"stack is full"<<endl;
    }

}

int Stack::peek()
{
    if(top == -1 || top < 0)
        return 0;
    else
        return arr[top];
}

void Stack::pop()
{
    if(top == -1 || top < 0)
    {
        cout<<"stack is empty";
        return;
    }
    else{
        cout<<"element is poped out "<<arr[top]<<endl;
        top--;
    }
}

bool Stack::isEmpty()
{
    if(top == -1 || top<0)
        return true;
    else
        return false;

}

int main()
{
    class Stack s1(10);
    s1.push(12);
    s1.push(13);
    s1.pop();
    s1.peek();
    int topElement = s1.peek();
    if(0)
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<"top element is : "<<topElement;
    }
    bool empty = s1.isEmpty();
    if(empty) cout<<"stack is empty"<<endl;
    else cout<<"stack is not empty"<<endl;
    return 0;
}