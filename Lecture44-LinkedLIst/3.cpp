//Insertion at  head and tail
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

void insertAtTail(Node* &tail , int d ){

    Node* temp = new Node(d);
    tail->next = temp ;
    tail = temp;
}


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

    Node *n1 = new Node(0);

    //head pointed to  n1
    Node *head = n1;
    Node *tail = n1;
    //at single node head and tail point to same node

    cout<<"At Head="<<endl;

    print(head);

    insertAtHead(head , 1);
    print(head);

    insertAtHead(head , 2);
    print(head);

    cout<<"At Tail="<<endl;
    
    insertAtTail(tail , 3);
    print(head);

    insertAtTail(tail , 4);
    print(head);

    insertAtTail(tail , 5);
    print(head);




    return 0;
}
