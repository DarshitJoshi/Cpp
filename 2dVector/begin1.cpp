//making a two dimensionsal arary
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> vrr( 3 , vector<int>(4,0) );
    //cout<<"Enter the element of 2D array:";
    for(int i=0 ; i<vrr.size() ; i++){
        for(int j=0 ; j<vrr[i].size() ; j++){
            cout<<vrr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}