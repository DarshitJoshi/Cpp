//Reverse a given string using recursion
#include<iostream>
using namespace std;


void reverse(string &name , int i , int j ){

    cout<<"Current string is :"<<name<<endl;

    //Base case
    if( i > j ){
        return;
    }

    swap(name[i],name[j]);

    i++;
    j--;

    reverse(name , i ,j);
}

int main(){

    string name = "DARSHIT";
    reverse( name , 0 , name.length()-1 );

    cout<<"FINALLY: "<<name<<endl;
    return 0;
}
