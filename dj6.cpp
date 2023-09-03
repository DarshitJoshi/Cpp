//Check if array is sorted and rotated.Q2-Date->30/05/23(1752)
/*Given an array 'arr',return true if the array was originally sorted in non-decreasing
   order then rotated some number of position (including zero)
   Otherwise return false.
*/
#include<iostream>
#include<vector>
using namespace std;

void hello(int a)
{
    if(a<=1)      //for case 4
    {
       cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}
int main()
{
    int n,key;
    int count=0;

    cout<<"Enter total elements of the array:";
    cin>>n;

    vector<int> arr;
    cout<<"Enter the elements:";
    for(int i=0; i<n; i++)
    {
        cin>>key;
        arr.push_back(key);
    }

    for(int i=1; i<n; i++)   //case 1 and case 2 Recall it
    {
        if(arr[i-1]>arr[i])
        {
            count++;
        }
    }

    if(arr[n-1] > arr[0])      //case 3
    {
        count++;
    }

    hello(count);



    return 0;
}