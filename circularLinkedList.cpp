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

void enterNodeInEmpty(Node * &last, int data)
{
    if(last != nullptr)
        return;
    
    Node *newNode = new Node(data);
    newNode->next = newNode;
    last = newNode;
    return;
}


void print( Node * &last)
{
    if (last == nullptr) return;

    Node *head = last->next;
    while(true)
    {
        cout<<head->data<<"  ";
        head = head -> next;
        if(head == last->next) break;
    }
    cout<<endl;
    
}

void enterNodeInBeginning(Node * &last, int data)
{
    if(last == nullptr) return enterNodeInEmpty(last, data);

    Node * newNode = new Node(data);
    newNode->next = last->next;
    last->next = newNode;

}

void enterNodeInEnd(Node * &tail, int data)
{
    if(tail == nullptr) return enterNodeInEmpty(tail, data);
    Node * newNode = new Node(data);
    newNode -> next = tail->next;
    tail->next = newNode;
    tail = newNode;

}

void enterAtSpecificPos(Node* &tail, int pos, int data)
{
    if(tail == nullptr) return enterNodeInEmpty(tail, data);
    int count  = 2;
    Node * temp = tail;
    while(count < pos)
    {
        temp = temp -> next;
        count++;
    }
}

void deleteFirstSpecificElement(Node * &tail, int element)
{
    //empty
    if(tail == nullptr) return;

    //only one element
    else if(tail->next == tail) 
    {
        tail = nullptr;
        delete tail;
    }
   
    else{
        Node *previous = tail;
        Node *current = previous -> next;
        while(current -> data != element)
        {
            previous = current;
            current = current -> next;
        }
        //if element count is more than one || last node deletion is also implemented here
        if(current == tail)
           tail = previous; 

        previous -> next = current -> next;
        current -> next  = nullptr;
        delete current; 
    }
}

int main() {
    Node *last = nullptr;

    enterNodeInEmpty(last , 4);
    enterNodeInBeginning(last, 3);
    enterNodeInBeginning(last, 2);
    enterNodeInBeginning(last, 1);
    enterNodeInEnd(last, 5);
    enterNodeInEnd(last, 6);
    enterNodeInEnd(last, 7);
    // enterAtSpecificPos(last, 2, 44);
    print(last);
    deleteFirstSpecificElement(last, 6);
    print(last);
    cout<<"done";
    cout<<endl<<last->next->data;
    return 0;
}