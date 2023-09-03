#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int rowSize,colSize;
    int key;
    cout<<"Enter total  number of rows=colums of square matrix:";
    cin>>rowSize;
    
    colSize=rowSize;

    vector<vector<int> > vrr(rowSize , vector<int>(colSize) );
    //logic
    // (i)-jb hm even column main hai to top to bottom jayenge.
    // (ii)-jb hm odd column main hai to bottom to top jayenge.

    cout<<"Enter the elements of "<<rowSize<<"x"<<colSize<<" matrix:"<<endl;
    for(int i=0 ; i<vrr.size() ; i++){
        cout<<"Enter elements of "<<i+1<<" row:";
        for(int j=0 ; j<vrr[i].size() ; j++){
            cin>>key;
            vrr[i][j]=key;
        }
    }

    for(int j=0 ; j<colSize ; j++){
        if( j%2 == 0 ){
            //j yha column ko represent krra
            //if wali statement true tb hogi jb hm even column main honge.
            for( int i=0 ; i<rowSize ; i++){
                cout<<vrr[i][j]<<" ";
            }
        }
        else{
            for(int i=rowSize-1 ; i>=0 ; i--){
                cout<<vrr[i][j]<<" ";
            }
        }
    }
    return 0;
}