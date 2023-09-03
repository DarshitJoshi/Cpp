//It is used to find the hcf(highest common factor) of any number.
#include<iostream>
using namespace std;
int hcf(int a , int b){
    if(a==0)
    return b;

    if(b==0)
    return a;


    while( a != b){
        if( a>b ){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a; // b bhi krskte hai return
}
int main(){
    int a,b;
    int ans;
    cout<<"Enter any two numbers:";
    cin>>a>>b;

    ans=hcf(a,b);

    cout<<"hcf of "<<a<<" & "<<b<<" is:"<<ans;
    return 0;
}