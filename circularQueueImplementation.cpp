#include<bits/stdc++.h>
using namespace std;

class Queue {
        int *arr;
        int size;
        int front;
        int rear;
    public:
    Queue() {
        size = 5000;
        front = -1;
        rear = -1;
        arr = new int[size];
    }
    void enqueue(int data);
    void dequeue();

};

void Queue :: enqueue(int data)
{
    //return if queue is full
    if((front == 0 && rear == size-1) || (rear == (front - 1) % (size - 1)))
        return;

    // adding first element for the first time    
    else if(front == -1 && rear == -1)
    {
        front = rear = 0;
        arr[rear] = data;
    }
    //adding element at the first index if the rear is at the last index
    else if(front !=0 && rear == size - 1)
    {
        rear = 0;
        arr[rear] = data;
    }
    else 
    {
        rear++;
        arr[rear] = data;
    }
}

void Queue :: dequeue()
{
    //check if the queue is already empty
    if(front == -1 && rear == -1)
        return;

    int data = arr[front];
    arr[front] = -1;
    //deleting the last element when front is on the size - 1 
    if(front == size - 1)
        front = 0;
    //delete the element if it's only one in the array
    else if(front == rear)
        front = -1;
    //all other case
    else
        front++;
    
}

int main() {
    Queue q1;
    return 0;
}