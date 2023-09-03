//Sum of array using recursion
#include<iostream>
using namespace std;

int findSum(int arr[] , int size){

    //Base case
    if(size == 0 ){
        return 0;
    }

    
    int sum = arr[0] + findSum( arr+1 , size-1);

    return sum ;
}

int main(){

    int arr[ ]= {3};
    int size = 1;

    int sum = findSum(arr,size);

    cout<<"Sum is : "<<sum;

    return 0;
}