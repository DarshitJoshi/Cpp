//Insertion at head 
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = NULL; 
    }

    
};


void insertAtHead(Node* &head , int d){
    Node* temp = new Node(d);
    temp -> next = head ;
    head = temp ;
}

void print(Node* &head){
     
    Node* temp = head;
    
    while( temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";
}

int main(){

    Node *n1 = new Node(10);

    //head pointed to  n1
    Node *head = n1;
    Node *tail = n1;
    //at single node head and tail point to same node

    cout<<"At Head="<<endl;
    
    print(head);

    insertAtHead(head , 12);
    print(head);

    insertAtHead(head , 15);
    print(head);

    insertAtHead(head , 22);
    print(head);


    return 0;
}
