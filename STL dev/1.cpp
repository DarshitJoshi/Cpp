#include<bits/stdc++.h>
using namespace std;
int main(){
    
    //making pair
    pair<int , string> p ;
    //1- initialization
    p = make_pair(1 , "Hello Baccho");
    cout<<p.first<<"-"<<p.second<<endl;
    cout<<endl;

    //2- initialization
    p = {2 , "Adani"};
    cout<<p.first<<"-"<<p.second<<endl;
    cout<<endl;


    //3- 
    pair<int , string> p1 = p ;
    p1.first = 3;
    cout<<p1.first<<"-"<<p1.second<<endl;
    cout<<p.first<<"-"<<p.second<<endl<<endl; //p ki value change nhi
                                    //hogi kyuki wo by reference
                                        //nhi gya hai
    
    //4- call by reference (change will happen in p also)
    pair<int , string> &p2 = p ;
    p2.first = 4;
    cout<<p2.first<<"-"<<p2.second<<endl;
    cout<<p.first<<"-"<<p.second<<endl;
    cout<<endl;




}