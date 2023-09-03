//find 2^n
#include<iostream>
using namespace std;

int power(int n){
  
  //base case
  if(n==0)
     return 1;

   int smallProblem = power(n-1);
   int bigProblem = 2 * smallProblem;

   return bigProblem;
}

int main(){

    int n;
    cout<<"2 to the power of:";
    cin>>n;

    int ans=power(n);

    cout<<"2 to the power of "<<n<<" is:"<<ans;

    return 0;

}