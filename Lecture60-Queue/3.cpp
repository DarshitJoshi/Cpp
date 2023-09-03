//Circular queue
#include<iostream>
using namespace std;

class CircularQueue{
   int *arr;
   int qfront;
   int rear;
   int size;

   public:

   CircularQueue(){
    size = 1001;
    arr = new int[size];
    qfront = 0;
    rear = 0;
   }

   void enqueue(int data){   //push operation

    if( ( qfront == 0 && rear == size-1 ) || ( rear == ( qfront -1)%(size-1) ) ){
        cout<<"Queue is full"<<endl;
        return ;
    }

    else if( qfront == -1){
        qfront = rear = 0;
        arr[rear] = data;
    }

    else if( ( rear == size-1 ) && ( qfront != 0) ){
        rear = 0 ;
        arr[rear] = data;
    }

    else{
        rear++;
        arr[rear] = data;
    }
}

void dequeue(){

    if( qfront == -1 ){
        cout<<"Queue is empty"<<endl;
        return;
    }
    else if( qfront == rear){
        qfront = rear = -1;
    }
    else if( qfront == size-1){
        qfront = 0;
    }
    else{
        qfront++;   
    }
}

};



int main(){


    return 0;
}