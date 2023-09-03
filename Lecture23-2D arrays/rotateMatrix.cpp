//rotate matrix 90 degree
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int rowSize,colSize;
    int key;
    cout<<"Enter total  number of rows of square matrix:";
    cin>>rowSize;
    
    cout<<"Enter total  number of colums of square matrix:";
    cin>>colSize;

    vector<vector<int> > vrr(rowSize , vector<int>(colSize) );

    cout<<"Enter the elements of "<<rowSize<<"x"<<colSize<<" matrix:"<<endl;
    for(int i=0 ; i<vrr.size() ; i++){
        cout<<"Enter elements of "<<i+1<<" row:";
        for(int j=0 ; j<vrr[i].size() ; j++){
            cin>>key;
            vrr[i][j]=key;
        }
    }

    //index bnara hu
    int startingRow=0;
    int startingCol=0;
    int endingRow=rowSize-1;
    int endingCol=colSize-1;

    int count = 0;
    int total = rowSize*colSize;

    while( count< total && startingCol <= colSize){
        for(int index = endingRow ; index >= startingRow ; index--){
            cout<<vrr[index][startingCol]<<" ";
            count++;
        }
        startingCol++;
    }

    return 0;
}