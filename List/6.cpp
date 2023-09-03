#include<iostream>
#include<list>
using namespace std;
int main(){

    list<int> l1,l2;
    l2.push_back(2);
    l2.push_back(4);
    l2.push_back(6);
    l2.push_back(8);
    l2.push_back(10);

    int n,key;

    cout<<"Enter total number of elements in l1: ";
    cin>>n;

    cout<<"Enter elements of l1:";
    for( int i=0 ; i < n ; i++){
        cin>>key;
        l1.push_back(key);
    } 


    cout<<"Before swapping elements of l1:";
    for( auto itr = l1.begin() ; itr != l1.end() ; ++itr)
         cout<<*itr<<" ";

    cout<<endl<<"Before swapping elements of l2:";
    for( auto itr = l2.begin() ; itr != l2.end() ; ++itr)
         cout<<*itr<<" ";

    l1.swap(l2);  //SWAPPING
    //l1.merge(l2); //Merging(l2 will become null)
    //l1 = l2 it is also correct

    cout<<endl<<"After swapping and merging elements of l1:";
    for( auto itr = l1.begin() ; itr != l1.end() ; ++itr)
         cout<<*itr<<" ";

    cout<<endl<<"After swapping elements of l2:";
    for( auto itr = l2.begin() ; itr != l2.end() ; ++itr)
         cout<<*itr<<" ";
    
    return 0;
}