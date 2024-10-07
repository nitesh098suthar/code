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
    Node* n1 = new Node(14);
    Node* head = n1;
    print(head);
    return 0;
}
