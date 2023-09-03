#include<iostream>
using namespace std;

bool isFound(int arr[][4], int row , int col ,int target)
{
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<4 ; j++)
        {
            if(arr[i][j]==target)
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr [3][4];
    cout<<"Enter elements:";
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<4 ; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the element to be found:";
    int target;
    cin>>target;

    if ( isFound(arr,3,4,target) )
    //whenever we pass 2d array we have to specify its dimension in paramter
    {
        cout<<"Element Found";
    }
    else
    {
        cout<<"Not found";

    }
    return 0;
}