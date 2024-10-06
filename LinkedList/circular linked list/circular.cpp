#include <iostream>
#include <vector>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
    //constructor 
    Node(int data)
    {
        this -> data = data;
        this -> next = nullptr;
    }
    //destructor
    ~Node()
    {
        int value = this->data;
        if(this->next != nullptr)
        {
            delete this->next;
            this->next = nullptr;
        }
        cout<<"this value has deleted :: "<<value;
    }
};

void insertInEmpty(Node* &tail, int data)
{
    if(tail != nullptr)
        return;

    Node *newNode = new Node(data);
    newNode -> next = newNode;
    tail = newNode;
}

void print(Node *&tail)
{
    Node * temp = tail;
    while(true)
    {
        cout<<temp -> data<<"  ";
        if(temp -> next == tail)
        {
            break;
        }
        temp = temp -> next; 
    }
}

void insertInBeginning(Node * &tail, int data)
{
    if(tail == nullptr) insertInEmpty(tail, data);
    Node * newNode = new Node(data);
    newNode -> next = tail -> next;
    tail -> next = newNode;

}

int main() {
    Node* tail = nullptr;
    insertInEmpty(tail, 12);
    insertInBeginning(tail, 11);
    insertInBeginning(tail, 13);
    print(tail);
    return 0;
}