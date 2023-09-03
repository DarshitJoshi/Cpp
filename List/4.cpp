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

    cout<<"Before removing elements are:";
    for( auto itr = l1.begin() ; itr != l1.end() ; ++itr)
         cout<<*itr<<" ";

    l1.remove(5);  //remove all seven from list

    cout<<endl<<"After removing elements are:";
    for( auto itr = l1.begin() ; itr != l1.end() ; ++itr)
         cout<<*itr<<" ";

    if(l1.empty() )
       cout<<endl<<"List is empty"<<endl;
    else
       cout<<"List is not empty"<<endl;

    return 0;
}