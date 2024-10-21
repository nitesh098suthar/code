#include<iostream>
using namespace std;
class Queue{
    int front; 
    int rear;
    int size;
    int *arr;
    public: 
        Queue()
        {
            front = 0;
            rear = 0;
            size = 5;
            arr = new int[size];
        }
        void enqueue(int data)
        {
            if(size == rear){
                cout<<"queue is full"<<endl;
                return;
            }
            else{
                arr[rear] = data;
                rear++;
                
                cout<<"element added"<<endl;
            }
        }
        void fronting()
        {
            if(front == rear)
            {
                cout<<"queue is empty"<<endl;
                return;
            }
            else
            {
                cout<<"front : "<<arr[front]<<endl;
            }
        }
        
        void isEmpty()
        {
            if(front == rear)
            {
                cout<<"queue is empty"<<endl;
            }
            else
            {
                cout<<"queue is not empty"<<endl;
            }
        }
        void dequeue()
        {
            if(front == rear)
            {
                cout<<"queue is empty"<<endl;
            }
            else
            {
                int answer = arr[front];
                arr[front] = -1;
                front++;
                if(front == rear)
                    {
                        front = 0;
                        rear = 0;
                    }
                cout<<answer<<" is deleted" << endl;
            }
        }
};

int main()
{
    Queue q;
    q.isEmpty();
    q.enqueue(12);
    q.enqueue(14);
    q.dequeue();
    q.fronting();
    return 0;
}