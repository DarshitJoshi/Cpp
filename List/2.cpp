#include<iostream>
#include<list>
using namespace std;
int main(){

    list<int> l1;

    int n,key;

    cout<<"Enter total number of elements in list: ";
    cin>>n;

    cout<<"Enter elements:";
    for( int i=0 ; i < n ; i++){
        cin>>key;
        l1.push_back(key);
    }

    cout<<"Elements are:";
    for( auto itr = l1.begin() ; itr != l1.end() ; ++itr)
         cout<<*itr<<" ";
    return 0;
}