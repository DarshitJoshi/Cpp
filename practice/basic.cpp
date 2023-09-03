#include<iostream>
using namespace std;

class Name{
    
};

int main(){

    return 0;
}
//finding length of linked list
int getLength(Node* &head){
    Node* temp = head;
    int len = 0;
    
    while ( temp != NULL){
        len++;
        temp = temp->next;
    }
    cout<<endl;
    return len;
}