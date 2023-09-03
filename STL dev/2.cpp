#include<bits/stdc++.h>
using namespace std;
int main(){

    //1- making array of pairs
    pair<int , string > p_array[3];

    p_array[0] = {1,"namaste"};
    p_array[1] = {2,"India"};
    p_array[2] = {3,"Bharat"};

    for( int  i = 0 ; i < 3 ; i++){
        cout<<p_array[i].first<<"-"<<p_array[i].second<<endl;
    }
    cout<<endl;

    //2- swap
    swap( p_array[0] , p_array[2]);
    for( int  i = 0 ; i < 3 ; i++){
        cout<<p_array[i].first<<"-"<<p_array[i].second<<endl;
    }
    cout<<endl;

    //3- Taking input
    pair< int , string > p1;
    cin>>p1.first;
    cin>>p1.second;
    cout<<p1.first<<"-"<<p1.second<<endl;

}