//Implement queue using array
#include<iostream>
using namespace std;

class Queue
{
public:
   int *arr;
   int qfront;
   int rear;
   int size;

   Queue(){
    size = 1001;
    arr = new int[size];
    qfront = 0;
    rear = 0;
   }

   void enqueue(int data){   //Push operation
      if( rear == size){
        cout<<".......Queue is full.......";
      }
      else{
        arr[rear] = data ;
        rear++;
      }
   }

   int dequeue(){   //delete operation
    if( qfront == rear){
        cout<<"Queue is empty";
        return -1;
    }
    else{
        int ans = arr[qfront];
        arr[qfront] = -1;
        qfront++ ;
        if( qfront == rear){
            qfront = 0;
            rear = 0;
        }
        return ans;
    }

   }

   int front(){ 
    if( qfront == rear){
        return -1;
    }
    else{
        return arr[qfront];
    }
   }

   bool isEmpty(){
    if(  qfront == rear){
        return true;
    }
    else{
        return false;
    }

   }

   };


int main(){

    Queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    cout<<"Front is:"<<q.front()<<endl;
    cout<<q.isEmpty()<<endl;

    q.dequeue();

    cout<<"Front is:"<<q.front()<<endl;
    cout<<q.isEmpty()<<endl;


    return 0;

}