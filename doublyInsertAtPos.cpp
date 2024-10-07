#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        this -> prev = nullptr;
        this -> next = nullptr;
    }
};

void insertAtPos(Node* &head, int pos, int data){
    Node* newNode = new Node(data);
    if(pos == 1)
    {
        newNode->next = head;
        if(head != nullptr)
        {
            head -> prev = newNode;
        }
        head = newNode;
        return;
    }
    Node* temp = head;
    int count = 2;
    while(count<pos)
    {
        temp = temp->next;
        count++;
    }
    if(temp == nullptr)
    {
        cout<<"position out of bound "<<endl;
    }
    newNode->next = temp->next;
    if(temp->next != nullptr)
    {
        temp->next->prev = newNode;
    }
    newNode->prev = temp;
    temp ->next = newNode;
}

void deleteFromBeginning(Node* &head){
    if(head == nullptr)
    {
        cout<<"already empty"<<endl;
        return;
    }
    Node *temp = head;
    head = head -> next;
    if(head != nullptr)
    {
        head -> prev = nullptr;
    }
    cout<<"deleted the : "<<temp->data<<endl;
    delete temp;

}

void deleteFromSpecificPos(Node * &head , int pos)
{
    if(head == nullptr)
    {
        return;
    }
    else
    {
        Node *current = head;
        int count = 1;

        while(count < pos)
        {
            current = current->next;
            count++;
        }

        if(current == nullptr)
        {
            return;
        }
        if(current->prev != nullptr)
        {
            current->prev->next = current->next;

        }
        if(current->next != nullptr)
        {
            current->next->prev = current->prev;
        }
        if(current == head)
        {
            head = head -> next;
        }
        delete current;
    }
}
void insertInRightPosition(Node * &head, int enteredData)
{
    Node *temp = head;

    while(temp!=nullptr)
    {
        temp = temp->next;
        if(temp->data>enteredData)
        {
            temp = temp-> prev;
            cout<<endl<<temp->data<<endl;
            Node *newNode = new Node(enteredData);
            newNode->next = temp->next;
            if(temp != nullptr)
            {
                temp->next->prev = newNode;                      
            }
            newNode->prev = temp;
            temp->next = newNode;
            break;
        }
    }
}

void print(Node* &head){

    Node* temp  = head;
    while(temp != nullptr)
    {
        cout<<temp->data<<"  ";
        temp = temp->next; 
    } 
    cout<<endl;

}


int main(){
    Node* n1 = new Node(100);
    Node* head = n1;
    // insertAtPos(head, 3, 11);
    // insertAtPos(head, 1, 13);
    insertAtPos(head, 1, 11);
    insertAtPos(head, 2, 13);
    insertAtPos(head, 3, 16);
    insertAtPos(head, 4, 24);
    insertAtPos(head, 5, 34);
    // deleteFromBeginning(head);
    // deleteFromBeginning(head);
    // deleteFromSpecificPos(head, 1);
    // deleteFromSpecificPos(head, 2);
// deleteFromSpecificPos(head, 4);
    int enteredData = 44;
    insertInRightPosition(head , enteredData );
    print(head);
    cout<<"here is the head now " <<head -> data<<endl;
    return 0;
}
