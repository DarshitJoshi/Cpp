#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev ;
    Node* next ;

    Node(int d){
        this->data = d ;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if( this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory free for the node having data:"<<value<<endl;
    }
};

//traversing the linked list
void print(Node* &head ){
    Node* temp = head;
    while( temp != NULL){
       cout<<temp->data<<" ";
       temp = temp->next;
    }
    cout<<endl;
}


void insertAtHead(Node* &head , int d ){
    Node *temp = new Node(d); //create new node
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node* &tail ,int d){
    Node *temp = new Node(d); //node created
    tail->next = temp ;
    temp->prev = tail ; 
    tail = temp;
}

void insertAtPosition(Node* &head , Node* &tail , int position , int d){
    Node* temp = head;
    int cnt = 1;

    //for insert at start
    if( position == 1){
        insertAtHead( head , d );
        return ;
    }


    while( cnt < position-1){
        temp = temp->next;
        cnt++;
    }

    //update at last
    if(temp->next == NULL){
        insertAtTail(tail,d);
        return ;
    }
    //creating a node
    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

//Delete any node
void deleteNode( Node* &head , int position){
    //deleting 1st node
    if( position == 1){
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        Node* current = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt < position){
            prev= current;
            current = current->next;
            cnt++;
        }
        current -> prev = NULL;
        prev -> next = current->next;
        current->next = NULL;
        delete current;

    }
}


int main(){

    Node* node1= new Node(1);
    Node* head = node1;
    Node* tail = node1;

    cout<<"Insert at head"<<endl;
    print(head);
    

    insertAtHead(head,2);
    print(head);

    insertAtHead(head,3);
    print(head);

    insertAtHead(head,4);
    print(head);

    cout<<"Insert at tail"<<endl;

    insertAtTail(tail , 5);
    print(head);

    insertAtTail(tail , 6);
    print(head);

    insertAtTail(tail , 7);
    print(head);

    insertAtTail(tail , 8);
    print(head);

    cout<<"Insert at any position"<<endl;

    insertAtPosition(head,tail,2,100);
    print(head);

    insertAtPosition(head,tail,1,100);
    print(head);

    cout<<"Delete at any position"<<endl;

    deleteNode(head , 4 );
    print(head);

    deleteNode(head , 1 );
    print(head);

    deleteNode(head , 5 );
    print(head);

    cout<<"Head:"<<head->data<<endl;
    cout<<"Tail:"<<tail->data<<endl;    

    return 0;
}