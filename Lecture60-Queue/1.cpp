//Understanding queue using STL

#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<int> q;

    q.push(5);
    q.push(10);
    q.push(15);

    cout<<"Size of queue is:"<<q.size()<<endl;
    cout<<"Front of queue is:"<<q.front()<<endl;
    cout<<"Back of queue is:"<<q.back()<<endl;

    q.pop();

    cout<<"Now Front of queue is:"<<q.front()<<endl;
    cout<<"Back of queue is:"<<q.back()<<endl;




}