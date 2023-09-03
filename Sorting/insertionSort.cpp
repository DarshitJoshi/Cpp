#include<iostream>
using namespace std;

void insertionSort( int arr[] , int n ){

   for( int i = 1 ; i < n ; i++){
      int current = arr[i];
      int j = i-1;
      while( arr[j] > current && j >=0 ){
        arr[j+1] = arr[j];
        j--;
      }
      arr[j+1] = current;
   }
}

int main(){

    int arr[] = { 5 , 3 , 4 , 1 ,2, 5 , 3 , 4 , 1 ,2};

    cout<<"Before sorting:";
    for( int i = 0 ; i < 10 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    insertionSort( arr , 10);

    cout<<"After sorting:";
    for( int i = 0 ; i < 10 ; i++){
        cout<<arr[i]<<" ";
    }



    return 0 ;
}