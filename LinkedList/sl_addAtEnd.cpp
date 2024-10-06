#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
    
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertionAtEnd(Node * &tail, int d)
{
    Node *temp = new Node(d);

    tail->next = temp;
    tail = temp;
}

void print(Node * &head)
{
    Node *temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main()
{

    Node *node1 = new Node(34);

    Node *head = node1;
    Node *tail = node1;
    print(head);

    cout<<endl;

    insertionAtEnd(tail, 23);
    insertionAtEnd(tail, 24);
    insertionAtEnd(tail, 25);
    insertionAtEnd(tail, 26);
    print(head);
    
    return 0;
}