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

void insertionAtBeginning(Node * &head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;

}


void print(Node * &head)
{
    Node *temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<"  ";
        temp = temp -> next;

    }
}

int main()
{
    Node *node1 = new Node(40);

    Node *head = node1;
    print(head);

    cout<<endl;

    insertionAtBeginning(head, 90);
    insertionAtBeginning(head, 91);
    insertionAtBeginning(head, 991);
    print(head);
    return 0;
}