//Find key using linear search and recurence
#include<iostream>
using namespace std;

void print( int arr[] , int size){
    cout<<"Size of array is:"<<size<<endl;

    for (int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool linearSearch( int arr[] , int key, int size){
    print(arr,size);   //thodi understanding bdane ke liye

    //Base case
    if(size == 0 )
       return false;
    
    if(key == arr [0])
      return true;

    bool ans = linearSearch(arr + 1 ,key ,size-1);
    return ans;

}
int main(){

    int arr[5] = {1,2,3,7,5};
    int key = 3;
    int size = 5;
    

    bool ans = linearSearch( arr , key , size );
    if(ans){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }
    return 0;
}