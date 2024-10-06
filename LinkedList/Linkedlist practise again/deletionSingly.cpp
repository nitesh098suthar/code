#include <iostream>
#include <vector>
using namespace std;

class Node{
    public: 
        int data;
        Node* next;

    Node(int data){
        this->data  = data;
        this->next = nullptr;
    }
};

void insertionAtTail(Node* &tail, int data){
    Node* newNode = new Node(data);
    tail->next  = newNode;
    tail = newNode;
}

void deleteFromHead(Node *&head){
    if(head == nullptr)
        return;
    
    Node* temp = head;
    head = head -> next;
    delete head;
}

void deleteFromTail(Node* &head, Node* &tail){

    //in case there is no node in linked list
    if(head == nullptr)
        return;

    //in case there is only one node in linked list
    if(head->next == nullptr)
    {
        delete head;
        head = nullptr;
        tail = nullptr;
        return;
    }

    //In case there are 2 or more nodes in the linked list
    Node* second_last = head;

    while(second_last->next->next != nullptr)
    {
        second_last = second_last->next;
    }
    
    delete (second_last -> next );
    second_last->next = nullptr;
    tail = second_last;
}


void deleteAtPos(int position, Node* &head, Node* &tail)
{
    // previous of node to be deleted
    Node* prev = nullptr; //this is previous node of just temp(current) node 
    Node* curr = head; // this is current node we want to delete;

    // Base case if linked list is empty
    if (curr == NULL)
        return;
// if there is only one element 
if(head->next == nullptr)
    {
        delete head;
        head = nullptr;
        tail = nullptr;
        return;
    }
    // Case 1: Head is to be deleted
    if (position == 1) {
        // make next node as head and free old head
        head = curr->next;
        curr->next = nullptr;
        delete(curr);
        return;
    }

    int count = 1;
    while(count < position)
    {
        prev = curr;
        curr = curr->next;
        count++;
    }

    prev -> next = curr->next;
    curr->next = nullptr;
    delete(curr);

}

void print(Node* &head){

    Node* temp = head;
    while(temp != nullptr)
    {
        cout<<temp->data<< " ";
        temp = temp->next;
    }
    cout<<endl;
}

int main() {
    Node* n1 = new Node(0);
    Node* tail = n1;
    Node* head = n1;
    insertionAtTail(tail, 10);
    // insertionAtTail(tail, 20);
    // insertionAtTail(tail, 30);
    // insertionAtTail(tail, 40);
    // insertionAtTail(tail, 50);
    // insertionAtTail(tail, 60);
    print(head);

    // deleteFromTail(head, tail);
    deleteAtPos(1, head, tail);
    // deleteAtPos(3, head, tail);
    // deleteAtPos(4, head, tail);
    print(head);
    cout<<"currently head" << head->data<<endl;
    cout<<"currently tail" << tail->data<<endl;
    return 0;
}