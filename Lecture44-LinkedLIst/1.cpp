#include<iostream>
using namespace std;

class Node{ //Node class
    public:
    int data;
    Node *next; //pointer dr mt

    Node(int data){    //constructor
    this->data = data;
    this->next = NULL;
    }

};

int main(){

    Node*  n1 = new Node(10); //for creating n1 in heap
    //n1 is pointer
    cout<<"data="<<n1->data<<endl;
    cout<<"Address="<<n1->next<<endl;

    return 0;
}