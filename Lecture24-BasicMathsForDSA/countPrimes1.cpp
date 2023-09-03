//count number of prime numbers from 2 to num-1
//But ye wala code TLE mar jayega
#include<iostream>
using namespace std;
bool isPrime(int n){
    if(n<=1)
    return false;

    for( int i=2 ; i<n ; i++){
        if( n%i == 0)
        return false;
    }
    return true;
}
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;

    int count=0;

    for( int i=2 ; i<num ; i++ ){
        if( isPrime(i) ){
            cout<<i<<" ";
            count++;
        }
    }
    cout<<endl;
    cout<<count<<" prime numbers";
    return 0;
}