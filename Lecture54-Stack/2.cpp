#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        this -> size = size ; 
        arr = new int[size];
        top = -1;
    }

    void push(int num){
        if( size - top > 1){
            top++;
            arr[top]=num;
        }
        else{
             cout<<".....Stack Overflow......"<<endl;
        }
    }

    void pop(){
        if(top >= 0 ){
            top--;
        }
        else{
            cout<<"......Stack Underflow......"<<endl;
        }
    }

    int peek(){ 
        if(top >= 0)
            return arr[top];
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    
    Stack st(5);

    st.push(1);
    st.push(34);
    st.push(17);

    cout<<st.peek()<<endl;

    st.pop();
    cout<<st.peek()<<endl;

    if( st.isEmpty() ){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is non empty"<<endl;
   }

    return 0 ;
}










