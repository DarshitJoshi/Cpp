//factorial of a number
#include<iostream>
using namespace std;

int factorial(int n){

    //Base case
    if(n==0)
        return 1;

    int smallerProblem = factorial(n-1);
    int biggerProblem = n * smallerProblem;

    return biggerProblem;
}

int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    
    int ans=factorial(n);

    cout<<"factorial is:"<<ans;

    return 0;
}