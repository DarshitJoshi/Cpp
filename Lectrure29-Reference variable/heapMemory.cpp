//static v/s dynamic memory 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter Elements:"<<endl;
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    cout<<"Elements are:"<<endl;
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    delete []arr;
    return 20;
}

