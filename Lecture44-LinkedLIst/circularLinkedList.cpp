#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this -> data = d;
        this -> next =NULL;

    }

    ~Node(){
        int value = this -> data;
        if( this -> next != NULL){
            delete next;
            next = NULL;
        }
         cout<<"Memory free for the node having data:"<<value<<endl;
    }
    
};

 void insertNode(Node* &tail , int element ,int d){
        if (tail == NULL){ //For empty list
           Node* newNode = new Node(d);
           tail = newNode;
           newNode -> next = newNode;
        }
        else{    //non empty list
        //assuming element present in the list
        Node* curr = tail;
        while(curr -> data != element){
            curr = curr->next; 
        }
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
        }
    }

    void print(Node* tail){ //call by value
        Node* temp = tail;
        do{
            cout<<tail->data<<" ";
            tail =  tail ->next;
        }while(tail != temp);
        cout<<endl;
    }

int main(){

    Node* tail = NULL;
    insertNode(tail,5,2); //empty wala case
    print(tail);

    insertNode(tail,2,3);  //2 ko dudho LL ke andr or uske aage node create krna 5
    print(tail);

    insertNode(tail,3,4); 
    print(tail);

    insertNode(tail,2,111); 
    print(tail);
    

    return 0;
}