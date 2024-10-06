#include<iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Node{

    public:
        int data;
        Node *next;
        Node *pre;
    
    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
        this -> pre = NULL;
    }

    ~Node()
    {
        cout<<"We're going to delete this node : "<<this->data;
        if(next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};

void insertionAtHead(Node* &head, int value, Node * &tail)
{
    if(head == NULL && tail == NULL)
    {
        Node *nodeOne = new Node(value);
        head = nodeOne;
        tail = nodeOne;
    }
    else
    {
        Node *newNode = new Node(value);
        newNode -> next = head;
        head ->pre = newNode;
        head = newNode;
    }
}

void insertionAtTail(Node * &tail, int value, Node* &head)
{


    if(tail == NULL && head == NULL)
    {
        Node *nodeOne = new Node(value);
        tail = nodeOne;
        head = nodeOne;
    }
    else
    {
        Node *newNode = new Node(value);
        newNode ->pre = tail;
        tail->next = newNode;
        tail = newNode;

    }
}

void insertionAtPosition(Node * &head, int value, Node * &tail, int position)
{
    if(head == NULL && tail == NULL)
    {
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else
    {
        if(position == 1)
        {
            insertionAtHead(head, value, tail);
            return;
        }
        else
        {
            int count = 1;
            Node *temp = head;
            while(count<position-1)
            {
                if(temp->next == NULL)
                {
                    insertionAtTail(tail, value, head);
                    return;
                }
                temp = temp->next;
                count++;
            }
            Node *newNode = new Node(value);
            newNode ->next = temp->next;
            newNode->pre = temp;
            temp->next;


        }
    }
}

void print(Node * &head)
{
    Node *temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    insertionAtHead(head, 23, tail);
    insertionAtHead(head, 24, tail);
    insertionAtHead(head, 25, tail);

    insertionAtTail(tail, 44, head);
    insertionAtTail(tail, 45, head);
    insertionAtTail(tail, 46, head);

    insertionAtPosition(head, 555, tail, 1);

    print(head);

    cout<<"tail ka data = "<<tail->data<<endl;
    cout<<"head ka data = "<<head->data<<endl;

    return 0;
}