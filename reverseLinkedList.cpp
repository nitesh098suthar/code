#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node * next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
    ~Node() {
        int value = this->data;
        if(this->next != nullptr) {
            delete this->next;
            this->next = nullptr;
        }
        cout << endl << "This value has been deleted :: " << value << endl;
    }
};

void insertAtHead(Node *&head, int data)
{
    Node *newNode = new Node(data);
    newNode -> next = head;
    head = newNode;
    return;
}

void print(Node * &head)
{
    Node * temp = head;
    while(temp != nullptr)
    {
        cout<<temp -> data <<"  ";
        temp = temp -> next;
    }
    cout<<endl;
}

void reverseit(Node * &head)
{
    if(head == nullptr || head -> next == nullptr)
    {
        return;
    }
    Node *prev = nullptr;
    Node *current = head;
    Node *forward;
    while(current != nullptr)
    {
        forward = current -> next;
        current->next = prev;
        prev = current;
        current = forward;
    }
}



int main() {
    Node *n1 = new Node(34);
    Node *head = n1;
    Node *tail = n1;
    insertAtHead(head, 12);   
    insertAtHead(head, 11);   
    insertAtHead(head, 10);   
    insertAtHead(head, 14);   
    print(head);
    reverseit(head);
    print(head);
    return 0;
}