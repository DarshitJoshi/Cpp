//you have given two sorted arrays num1 ,num2 sorted in decreasing order.
//two integer m and n representing the number of element in num1 and num2.
//merge num1 and num2 into a single sorted array in non-decreasing order.

#include<iostream>
#include<vector>
using  namespace std;
int main()
{
    int m,n,key;

    cout<<"Enter total elements in num1:";
    cin>>m;

    cout<<"Enter total elements in num2:";
    cin>>n;


    vector <int> num1;
    cout<<"Enter elements of num1:"<<endl;
    for (int  i = 0; i < m ; i++)
    {
        cin>>key;
        num1.push_back(key);
    }


    vector <int> num2;

     cout<<"Enter elements of num2:"<<endl;
    for (int  i = 0; i < n ; i++)
    {
        cin>>key;
        num2.push_back(key);
    }
    
    for(int i=m , j=0 ; i<m+n ; i++,j++)
    {
        num1[i]=num2[j];
    }
     
    cout<<"After merging:";
    for(int i=0 ; i<m+n ; i++)
    {
        cout<<num1[i]<<" ";
    }

    return 0;
}