//TLE se bchne ka algorithm-> sieve of Eratosthenes 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    int count=0;
    cout<<"Enter the total number of elements:";
    cin>>n;
    vector<bool> vrr( n , true);
    //initialy sb ko prime number mana hai
    vrr[0]=vrr[1]=false;
    for( int i =2 ; i < n ; i++){
        if( vrr[i] ){
            count++;

            for( int j = 2*i ; j<n ; j = j+i ){
                vrr[j]=false;
            }
        }
    }
    cout<<count<<" prime numbers";
    return 0;
}