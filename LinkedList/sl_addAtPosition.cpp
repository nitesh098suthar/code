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
void insertAtHead( Node * &head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertAtTail( Node * &tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
    
}
void insertAtPosition(Node * &head, int position , int d, Node* &tail)
{

    if(position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    int count = 1;
    Node *temp = head;

    while(count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    if(temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    {
        insertAtHead(head, d);
        return;
    }

    Node *newNode = new Node(d);

    newNode -> next = temp->next;
    temp -> next = newNode;

}
void print(Node * &head)
{
    Node *temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<"  ";
        temp = temp -> next;
    }
    cout<<endl;
}
int main()
{

    Node *node1 = new Node(23);

    Node *head = node1;
    Node *tail = node1;

    insertAtHead(head,23);
    insertAtHead(head, 232);
    insertAtHead(head, 234);

    print(head);

    insertAtPosition(head, 3, 99, tail);
    insertAtPosition(head, 1, 1111, tail);
    insertAtPosition(head, 6, 1111, tail);
    insertAtPosition(head, 8, 233, tail);

    
    print(head);
    cout<<endl<<head->data<<endl;
    cout<<tail->data;
    return 0;
}