#include<iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Node{
    public :
        int data;
        int *next;
    

    Node(int n){
        this -> data = n;
        next = NULL;       
    }

};



int main()
{

    Node *node1 = new Node(34);
    
    
    
    return 0;
}