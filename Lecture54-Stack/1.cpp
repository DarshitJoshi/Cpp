//LIFO using STL
#include<iostream>
#include<stack>      //Stack header file
using namespace std;
int main(){

    stack<int> s;  //creation of stack

    s.push(2);        // insertion operation in stack
    s.push(34);
    s.push(6);
    s.push(12);

    cout<<"Top:"<<s.top()<<endl;   // To show top elements
    cout<<"Size:"<<s.size()<<endl;
    s.pop();

    cout<<"Now top is:"<<s.top()<<endl;
    cout<<"Size:"<<s.size()<<endl;

    if( s.empty() ){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }


    return 0 ;
}
