#include<iostream>
using namespace std;
int main(){

    pair< int , int > p;
    p = make_pair(5,6);

    cout<<"Value is :("<<p.first<<","<<p.second<<")"; 
    return 0;
}