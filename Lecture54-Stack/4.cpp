//delete middle element
#include<iostream>
#include<stack>
using namespace std;

void deleteMiddle( stack<int> &inputStack , int size , int count){
    //base case (solved using recursion)
    if( count == size/2 ){
        inputStack.pop();
        return ;
    }

    int num = inputStack.top();
    inputStack.pop();

    //recursion call
    deleteMiddle( inputStack , size , count + 1 );

    //jab wapas aagye
    inputStack.push(num);
} 

int main(){

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    int count = 0;

    deleteMiddle( s , s.size() , count);
    
    cout<<"Now stack is:"<<endl;
    while ( !s.empty() ){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0 ;
}