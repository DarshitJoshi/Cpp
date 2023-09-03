//Insert element at the bottom of the stack 
#include<iostream>
#include<stack>
using namespace std;

void print( stack<int> s ){
    while( !s.empty() ){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}

void insertAtBottom( stack<int> &s , int count , int element){
    //base case
    if( count == 0 ){
        s.push(element);
        return;
    }
    int ch = s.top();
    s.pop();
    //recursion call
    insertAtBottom( s , count-1 , element );
    s.push(ch);

}

int main(){

    stack<int> s;
    int insert,ch;

    s.push(1);
    s.push(2);
    s.push(3);

    
    cout<<"Enter element you want to insert:";
    cin>>insert;

    cout<<"Before insertion stack is:";
    print(s);

    insertAtBottom( s , s.size() , insert);

    cout<<"After insertion stack is:";
    print(s);

    do{
    cout<<"Do you want to insert more elements in "
     <<"stack press '1' for yes '0'for no:"<<endl;
     cin>>ch;
     if( ch == 1 ){
     cout<<"Enter element you want to insert:";
     cin>>insert;

     cout<<"Before insertion stack is:";
     print(s);

     insertAtBottom( s , s.size() , insert);

     cout<<"After insertion stack is:";
     print(s);
     }
     else{
        break;
     }

    }while(ch);
    


    return 0;
}