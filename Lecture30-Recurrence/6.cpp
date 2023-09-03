//Digit in numbers
#include<iostream>
using namespace std;

void sayDigit( int num , string arr[] ){
    //Base Case
    if( num == 0)
       return ;
    
    //Processing
    int digit = num % 10 ;
    num = num / 10;

    //recursive call
    sayDigit( num , arr);

    cout<<arr[digit]<<" ";

}

int main(){
    int n;
    string arr[10]={ "zero" , "one" , "two" , "three" , "four" , 
                     "five" , "six" , "seven" , "eight" , "nine" };
    cout<<"Enter the number:";
    cin>>n;

    sayDigit( n , arr );
    return 0;
}