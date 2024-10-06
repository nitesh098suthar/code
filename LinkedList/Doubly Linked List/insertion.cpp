
// #include <iostream>
// #include <bits/stdc++.h>
// #include <vector>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *pre;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->pre = NULL;
//         this->next = NULL;
//     }
//     ~Node()
//     {
//         cout << "this value is going to delete : " << this->data;
//         if(next != NULL)
//         {
//             delete next;
//             next = NULL;
//         }
//     }
// };

// void insertAtHead(int value, Node *&head, Node *&tail)
// {
//     Node *newNode = new Node(value);
//     newNode->next = head;
//     if (head != NULL)
//     {
//         head->pre = newNode;
//     }
//     head = newNode;

//     if (tail == NULL)
//     {
//         tail = newNode;
//     }
// }

// void insertAtTail(int value, Node *&head, Node *&tail)
// {
//     Node *newNode = new Node(value);
//     if (tail != NULL)
//     {
//         tail->next = newNode;
//         newNode->pre = tail;
//     }
//     tail = newNode;

//     if (head == NULL)
//     {
//         head = newNode;
//     }
// }

// void insertAtPosition(int position, Node *&head, Node *&tail, int value)
// {
//     Node *newNode = new Node(value);
//     int count = 1;
//     Node *temp = head;

//     if (position == 1)
//     {
//         newNode->next = temp;
//         temp->pre = newNode;
//         head = newNode;

//         if (tail == NULL)
//         {
//             tail = newNode;
//         }
//         return;
//     }

//     while (count < position - 1 && temp != NULL)
//     {
//         count++;
//         temp = temp->next;
//     }

//     if (temp == NULL)
//     {
//         // The list is shorter than the specified position
//         // Insert at the end
//         tail->next = newNode;
//         newNode->pre = tail;
//         tail = newNode;
//         return;
//     }

//     newNode->next = temp->next;
//     newNode->pre = temp;
//     if (temp->next != NULL)
//     {
//         temp->next->pre = newNode;
//     }
//     temp->next = newNode;

//     if (newNode->next == NULL)
//     {
//         // Update tail if inserting at the end
//         tail = newNode;
//     }
// }

// void deleteByPosition(int position, Node *&head, Node *&tail)
// {
//     if (position == 1)
//     {
//         Node *temp = head;

//         temp->next->pre = NULL;
//         head = temp->next;
//         temp->next = NULL;
//         delete temp;
//     }
//     else
//     {
//         Node *curr = head;
//         Node *previous = NULL;

//         int count = 1;

//         while (count < position)
//         {
//             previous = curr;
//             curr = curr->next;
//             count++;
//         }

//         curr->pre = NULL;
//         previous->next = curr->next;
//         curr->next = NULL;
//         delete curr;
//     }
// }

// void print(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main()
// {
//     Node *nodeOne = new Node(45);
//     Node *head = nodeOne;
//     Node *tail = nodeOne;

//     insertAtHead(34, head, tail);
//     insertAtHead(31, head, tail);
//     insertAtHead(30, head, tail);

//     insertAtTail(222, head, tail);
//     insertAtTail(333, head, tail);
//     insertAtTail(555, head, tail);

//     insertAtPosition(2, head, tail, 000);
//     insertAtPosition(8, head, tail, 121);
//     /*
//         I got the solution why 121 is actually not
//         adding at 8th position -> here is the solution ->
//         so we're not actually adding 121 at 8th position,
//         we're adding 121 before the element which is on 8th position.
//         so the element which is before 121 will before 121 the
//         element which is after that element will settle next to
//         the 121
//     */
//     // in our case 121 should be add before the element which is at
//     // 8th position it doesn't matter that 121 is adding at index no 9 or not. but it must be added before the element which is 8th position

//     insertAtPosition(5, head, tail, 999);

//     print(head);

//     cout << endl
//          << "head ka data " << head->data;
//     cout << endl
//          << "tail ka data " << tail->data;


//     // deleteByPosition(30, head, tail);
//     deleteByPosition(555, head, tail);
//     // deleteByPosition(34, head, tail);
//     cout<<"here";
//     print(head);
//     cout << endl;
//     return 0;
// }


// #include <iostream>
// #include <bits/stdc++.h>
// #include <vector>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *pre;
//     Node *next;

//     Node(int data)
//     {
//         this->data = data;
//         this->pre = NULL;
//         this->next = NULL;
//     }
//     ~Node()
//     {
//         cout << "this value is going to delete : " << this->data << endl;
//         if (next != NULL)
//         {
//             delete next;
//             next = NULL;
//         }
//     }
// };

// void insertAtHead(int value, Node *&head, Node *&tail)
// {
//     Node *newNode = new Node(value);
//     newNode->next = head;
//     if (head != NULL)
//     {
//         head->pre = newNode;
//     }
//     head = newNode;

//     if (tail == NULL)
//     {
//         tail = newNode;
//     }
// }

// void insertAtTail(int value, Node *&head, Node *&tail)
// {
//     Node *newNode = new Node(value);
//     if (tail != NULL)
//     {
//         tail->next = newNode;
//         newNode->pre = tail;
//     }
//     tail = newNode;

//     if (head == NULL)
//     {
//         head = newNode;
//     }
// }

// void insertAtPosition(int position, Node *&head, Node *&tail, int value)
// {
//     Node *newNode = new Node(value);
//     int count = 1;
//     Node *temp = head;

//     if (position == 1)
//     {
//         newNode->next = temp;
//         if (temp != NULL)
//         {
//             temp->pre = newNode;
//         }
//         head = newNode;

//         if (tail == NULL)
//         {
//             tail = newNode;
//         }
//         return;
//     }

//     while (count < position - 1 && temp != NULL)
//     {
//         count++;
//         temp = temp->next;
//     }

//     if (temp == NULL)
//     {
//         // The list is shorter than the specified position
//         // Insert at the end
//         tail->next = newNode;
//         newNode->pre = tail;
//         tail = newNode;
//         return;
//     }

//     newNode->next = temp->next;
//     newNode->pre = temp;
//     if (temp->next != NULL)
//     {
//         temp->next->pre = newNode;
//     }
//     temp->next = newNode;

//     if (newNode->next == NULL)
//     {
//         // Update tail if inserting at the end
//         tail = newNode;
//     }
// }

// void deleteByPosition(int position, Node *&head, Node *&tail)
// {
//     if (head == NULL)
//     {
//         cout << "List is empty. Cannot delete." << endl;
//         return;
//     }

//     if (position == 1)
//     {
//         Node *temp = head;

//         if (temp->next != NULL)
//         {
//             temp->next->pre = NULL;
//             head = temp->next;
//         }
//         else
//         {
//             // Only one element in the list
//             head = tail = NULL;
//         }

//         temp->next = NULL;
//         delete temp;
//     }
//     else
//     {
//         Node *curr = head;
//         Node *previous = NULL;

//         int count = 1;

//         while (count < position && curr != NULL)
//         {
//             previous = curr;
//             curr = curr->next;
//             count++;
//         }

//         if (curr == NULL)
//         {
//             cout << "Position exceeds the length of the list. Cannot delete." << endl;
//             return;
//         }

//         if (curr->next != NULL)
//         {
//             curr->next->pre = previous;
//         }
//         else
//         {
//             // Deleting the last node
//             tail = previous;
//         }

//         previous->next = curr->next;
//         curr->next = NULL;
//         curr->pre = NULL;
//         delete curr;
//     }
// }

// void print(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main()
// {
//     Node *nodeOne = new Node(45);
//     Node *head = nodeOne;
//     Node *tail = nodeOne;

//     insertAtHead(34, head, tail);
//     insertAtHead(31, head, tail);
//     insertAtHead(30, head, tail);

//     insertAtTail(222, head, tail);
//     insertAtTail(333, head, tail);
//     insertAtTail(555, head, tail);

//     insertAtPosition(2, head, tail, 000);
//     insertAtPosition(8, head, tail, 121);
//     insertAtPosition(5, head, tail, 999);

//     print(head);

//     // deleteByPosition(3, head, tail);
//     // deleteByPosition(1, head, tail);
//     deleteByPosition(10, head, tail);
//     deleteByPosition(1, head, tail);
//     // deleteByPosition(10, head, tail); // Trying to delete beyond the length of the list

//     cout << endl
//          << "head ka data " << head->data;
//     cout << endl
//          << "tail ka data " << tail->data<<endl;

//     print(head);
//     cout << endl;

//     return 0;
// }
