//Given an array rotate the array to the right by k steps where k is non -negative
//Date->30/05/23 Q1.(189)
#include<iostream>
#include<vector>
using namespace std;
int main()
{

    int n,key,k;
    cout<<"Enter total elements of the array:";
    cin>>n;

    vector<int> arr;
    vector<int> temp(n);     //concept->temp ke total element btane hi pdenge wrna run time erroe ayega.

    for( int i=0 ; i<n ; i++ )
    {
        cin>>key;
        arr.push_back(key);
    }

    cout<<"Enter how much shift you want:";
    cin>>k;
    
    for(int i=0; i<n; i++)
    {
        temp[(i+k)%arr.size()]=arr[i];
    }

    arr=temp;

    cout<<"Printing:";
    for(int i=0 ; i<n ; i++)
    {
          cout<<arr[i]<<" ";
    }
    return 0;
}