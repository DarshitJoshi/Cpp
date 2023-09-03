#include<bits/stdc++.h>
using namespace std;

void printVec( vector<int> v){
    cout<<"Elements are:";
    for( int i = 0 ; i < v.size() ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl<<"Size-"<<v.size()<<endl;
} 

int main()
{
    //1-
    int n;
    vector<int> v ;
    cout<<"Enter the size:";
    cin>>n;

    cout<<"Enter elements:";
    for( int i = 0 ; i < n ; i++){
        int x;
        cin>>x;
        printVec(v); //really vectors are dynamic?
        v.push_back(x);
    }
    printVec(v);
    cout<<endl;

    //2-
    vector<int> v1(6 , 1);
    printVec(v1);
    cout<<endl;


    //3- copying is also available
    vector<int> v2(6 , 1);
    printVec(v2);




}