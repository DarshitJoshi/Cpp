//Calculate power using recursion
#include<iostream>
using namespace std;

int power(int a , int b){
    if(b == 0)
      return 1;

    if (b == 1)
      return a;

    //recursive call
    int ans = power( a , b/2);

    if( b%2==0)
      return ans*ans;
    else{
        return a*ans*ans;
    }
}

int main(){

    int a,b;
    cout<<"Enter the number:";
    cin>>a;

    cout<<"Enter the power you want to know of "<<a<<":";
    cin>>b;

    int ans = power( a ,b);

    cout<<a<<" to the power of "<<b<<" is :"<<ans<<endl;

    return 0;
}