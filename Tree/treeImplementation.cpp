#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node * left;
        Node * right;
    Node(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

// Function to build the tree
Node* buildingTree(Node *root) {
    int data;
    cout<<"Enter the data of the node (Enter -1 for no node): ";
    cin>>data;


    // Create a new node
    root = new Node(data);
    // Base case: if the data is -1, return nullptr
    if(data == -1) 
        return nullptr;

    // Recursively build the left and right subtrees
    cout<<"Enter data for the left child of "<<data<<endl;
    root->left = buildingTree(root->left);

    cout<<"Enter data for the right child of "<<data<<endl;
    root->right = buildingTree(root->right);

    return root;
}

int main() {
    Node *root = nullptr;
    root = buildingTree(root);
    return 0;
}
