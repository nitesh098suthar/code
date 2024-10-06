#include <iostream>
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
    ~Node()
    {
        int value = this->data;
        cout << "value : " << value << endl;

        cout << "this->data : " << this->data << endl;

        if (this->next != NULL)
        {
            cout << "Beforer delte next : " << next << endl;
            delete next;
            cout << "After delte next : " << next << endl;
            this->next = NULL;
        }

        cout << "Memory is freed" << endl;
    }
};

void insertAtHead(Node *&head, int d)
{
    Node *temp = head;
    if (head == NULL)
    {
        Node *node1 = new Node(d);
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head = temp;
    }
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);

    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&head, Node *&tail, int pos, int d)
{
    Node *temp = head;
    Node *insertToPos = new Node(d);
    int count = 1;
    if (pos == 1)
    {
        // insertToPos->next = temp;
        // head = insertToPos;
        // or call the insertAtHead
        insertAtHead(head, d);
        return;
    }

    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }
    insertToPos->next = temp->next;
    temp->next = insertToPos;
}

void deletion(Node *&head, Node *&tail, int position)
{

    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *pre = NULL;
        int count = 1;

        while (count < position)
        {
            pre = curr;
            curr = curr->next;
            count++;
        }
        pre->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void traverse(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}


int counting(Node *&head)
{
    Node *temp = head;
    int count = 0;
    while(temp != NULL)
    {
        temp = temp-> next;
        count++;
        
    }
    return count;
}
int main()
{

    Node *node1 = new Node(5);
    Node *head = node1;
    Node *tail = node1;

    traverse(head);

    cout << endl
         << "After Insertion at head" << endl;

    insertAtHead(head, 10);

    traverse(head);

    cout << "After insert at tail" << endl;
    insertAtTail(tail, 100);
    traverse(head);

    cout << "After insert at position 3rd" << endl;
    insertAtPosition(head, tail, 3, 22);
    traverse(head);

    cout << "After insert at position 1st" << endl;
    insertAtPosition(head, tail, 1, 32);
    traverse(head);

    cout << "After insert at last position" << endl;
    insertAtPosition(head, tail, 5, 42);
    traverse(head);

    cout << "After deletion the third position : " << endl;
    deletion(head, tail, 6);
    traverse(head);

    cout << "After deletion the first position : " << endl;
    deletion(head, tail, 1);
    traverse(head);

    cout<<"Here is the counting : "<<endl;
    int count = counting(head);
    cout<<"total no of ele is : "<<count<<endl;
    

    // checking the position of head and tail pointer
    cout << "head is : " << head->data << endl;
    cout << "tail is : " << tail->data;
    return 0;
}