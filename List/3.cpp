#include<iostream>
#include<list>
using namespace std;

bool even( int x) {
    return (x % 2 == 0);
}

int main(){

    list<int> l1;

    int n,key;

    cout<<"Enter total number of elements in list: ";
    cin>>n;

    cout<<"Enter elements:";
    for( int i=0 ; i < n ; i++){
        cin>>key;   
        if( key & 1)        //if key is odd push in back
        /* & (it is called as binary AND)  when any number has 1 in last it is odd
        example- 101(5) , 111(7) , 001(1)*/
        l1.push_back(key);
        else
        l1.push_front(key);
    }

    cout<<"Elements are:";
    for( auto itr = l1.begin() ; itr != l1.end() ; ++itr)
         cout<<*itr<<" ";

    cout<<endl<<"Front is :"<<l1.front() <<endl<<"Back is:"<<l1.back()<<endl;

    l1.pop_front();
    l1.pop_back();


    cout<<"Now Front is :"<<l1.front() <<endl<<"Now Back is:"<<l1.back()<<endl;

    l1.remove_if(even);   //it will remove all even numbers

    cout<<"Now Front is :"<<l1.front() <<endl<<"Now Back is:"<<l1.back()<<endl;

    return 0;
}