//Given an integer array arr
//move all zeroes to the end of it
//while maintaining the relative order of the non zero element
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr;

    int n,key;
    cout<<"Enter total elements of the array:";
    cin>>n;

    for( int i=0 ; i<n ; i++ )
    {
        cin>>key;
        arr.push_back(key);
    }

    int nonZero=0;
    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[nonZero]);
            nonZero++;
        }
    }

    cout<<"Printing:";
    for(int i=0 ; i<n ; i++)
    {
        {
          cout<<arr[i]<<" ";
        }
    
    }
    return 0;
}