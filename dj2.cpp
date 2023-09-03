//Given an array 'arr' of integers and a index 'm' you have to reverse the array after the that index.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> arr;

    int m,n,i,j,key;
    cout<<"Enter total elements of the array:";
    cin>>n;

    for(int i=0 ; i<n ; i++)
    {
        cout<<"Enter "<<i+1<<" element:";
        cin>>key;
        arr.push_back(key);
    }

    cout<<"Enter the index:";
    cin>>m;

    for( i=m+1 , j=n-1 ; i<j ; i++ , j--)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;

} 
