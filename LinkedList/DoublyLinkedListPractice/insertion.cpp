#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;
    Node(int data)
    {
        this -> data = data;
        this -> next = nullptr;
        this -> prev = nullptr;
    }
};

void insertionAtHead(int data, Node* &head)
{
    Node* newNode = new Node(data); // create the new node

    newNode->next = head;  // new node points to current head
    if(head != nullptr)
    {
        head->prev = newNode;  // current head's prev points to new node
    }
    head = newNode;  // update head to new node
}
void insertionAtTail(int data, Node* &head)
{
    Node* newNode = new Node(data); // create the new node

    if(head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node* temp = head;
        while(temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode -> prev = temp;

    }

}

void insertionAtPosition(int pos, int data, Node* &head)
{
    
}

void print(Node* &head)
{
    Node* temp = head;
    while(temp != nullptr)
    {
        cout<<temp->data<<"  ";
        temp = temp->next;
    }
    cout<<endl;
}

int main() {
    Node* n1 = new Node(12);
    Node* head = n1;
    insertionAtHead(13, head);
    insertionAtHead(14, head);
    insertionAtHead(15, head);
    insertionAtHead(16, head);
    insertionAtTail(11, head);
    insertionAtTail(10, head);
    insertionAtTail(9, head);
    insertionAtPosition(2, 100, head);
    print(head);
    cout<<endl;
    cout<<"head->prev : "<<head->next<<endl;
    return 0;
}