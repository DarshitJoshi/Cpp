//ghr pahuch gya 
#include<iostream>
using namespace std;

void ghrJanaHai( int s , int d ){
    cout<<"Source hai : "<<s<<" Destination hai : "<<d<<endl;
    if ( s == d){
        cout<<"..........Ghr Pahuch Gya..........."<<endl;
        return ; //Return mandatory hota hai base case mai
    } 
    s = s+1;
    ghrJanaHai(s,d);
}

int main(){

    int source = 1 ;
    int destination = 687;

    ghrJanaHai( source, destination);

    return 55;
}