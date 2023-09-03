//reverse a stack using recursion
#include<iostream>
#include<stack>
using namespace std;

void reverseStack( stack<int> &s , int count){
    //Base case
    if( count == 0){
        return;
    }
    int ch = s.top();
    s.pop();
    reverseStack( s , count-1);
    s.push(ch);
}
int main(){
    stack<int> s;
    int insert,ch;

    s.push(67);
    s.push(756);
    s.push(322);

    reverseStack( s , s.size() );
}