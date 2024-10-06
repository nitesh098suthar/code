#include<iostream>
using namespace std;

class Stack{

    public: 
        int *arr;
        int size;
        int top;
    Stack(int size){
        this -> size = size;
        top = -1;
        arr = new int [size];
    }

    void push(int ele)
    {
        if(top>size-1)
        {
            cout<<"Stack is overflow"<<endl;
            return;
        }
        else
        {
            top++;
            arr[top] = ele;
            cout<<"top : "<<top<<endl;
            cout<<"inserted : "<<arr[top]<<endl;

        }
    }

    void pop()
    {
        if(top<0)
        {
            cout<<"Stack is empty: "<<endl;
            return;
        }
        else
        {
            cout<<"  "<<arr[top];
            top--;
        }
    }
};

int main()
{
    Stack s(50);
    
    cout<<"How many ele you want in the stack? (max length = 50)"<<endl;
    int n;
    cin>>n;

    int ele;
    cout<<"Enter elements"<<endl;

    for(int i=0; i<n; i++)
    {
        cin>>ele;
        s.push(ele);
    }

    cout<<"Here is the reversed array: "<<endl;

    for(int i=0; i<n; i++)
    {
        s.pop();
    }

    return 0;
}