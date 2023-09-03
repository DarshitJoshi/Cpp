//Find key using Binary search and recurence
#include<iostream>
using namespace std ;

void print( int arr[] , int s , int e){
    cout<<"Elements in  binary search:";
    for( int i = s ; i <= e ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool binarySearch(int arr[], int s , int e , int k){

    print(arr,s,e);
    //Base case->Element not found
    if(s > e)
      return false;
    
    //Element not found
    int mid = s+(e-s)/2;


    if (arr[mid] == k)
      return true;

    if(arr[mid] < k){
        binarySearch(arr ,mid+1, e ,k);
    }
    else{
        binarySearch(arr ,s, mid-1 ,k);
    }
}

int main(){

    int arr[]= {1,2,4,5,7,9,13,34,37,45,67}; //array must be sorted
    int key = 67;
    int size = 11;
    int start = 0;
    int end = size - 1;

    bool ans = binarySearch(arr, start , end , key);

    if(ans){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }
    return 0;

}