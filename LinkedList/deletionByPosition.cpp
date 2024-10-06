#include <iostream>
using namespace std;

// agar lenght se jyda value daal rahe hai to code crash hoga because hamne if condition ni lagai
//  if(totalLenghtOfLinkedList > position) to hi hum code run krenge else enter valid length.
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
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "this data is deleted " << value << endl;
    }
};
int counting(Node *&head)
{
    Node *temp = head;
    int count = 0;
    while(temp != NULL)
    {
        temp = temp->next;
        count++;
    }

    return count;
}
void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}
void insertAtPosition(Node *&head, int position, int d, Node *&tail)
{

    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    int count = 1;
    Node *temp = head;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    Node *newNode = new Node(d);

    newNode->next = temp->next;
    temp->next = newNode;
}
void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}

void deleteByPos(Node *&head, int position, Node * &tail)
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
        Node *pre = NULL;
        Node *curr = head;
        int count = 1;

        int totalNodes = counting(head);
        while (count < position) // agar current ko 2nd node par point karana hai to loop ek baar chlega
        {
            pre = curr;
            curr = curr->next;
            count++;
            if(curr -> next == NULL)
            {
                tail = pre; // if the next is null and current node is to be deleted then the tail becomes the previous element
            }
        }
        pre->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{

    Node *node1 = new Node(23);

    Node *head = node1;
    Node *tail = node1;

    insertAtHead(head, 23);
    insertAtHead(head, 232);
    insertAtHead(head, 234);

    print(head);

    insertAtPosition(head, 3, 99, tail);
    insertAtPosition(head, 1, 1111, tail);
    insertAtPosition(head, 6, 1111, tail);
    insertAtPosition(head, 8, 233, tail);

    print(head);

    deleteByPos(head, 2, tail);
    deleteByPos(head, 1, tail);
    deleteByPos(head, 6, tail);


    cout<<"position of head "<<head->data<<endl;
    cout<<"position of tail "<<tail->data<<endl;


    print(head);
    int count  = counting(head);
    cout<<"total no of the nodes are "<<count<<endl;
    return 0;
}