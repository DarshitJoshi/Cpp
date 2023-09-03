#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int row=3;
    int col=4;
    int key;
    vector<vector<int> > vrr( row , vector<int>(col) );
    cout<<"Enter the elements of "<<row<<"x"<<col<<" matrix:"<<endl;
    for(int i=0 ; i<vrr.size() ; i++){
        cout<<"Enter elements of "<<i+1<<" row:";
        for(int j=0 ; j<vrr[i].size() ; j++){
            cin>>key;
            vrr[i][j]=key;
        }
    }


    for(int i=0 ; i<vrr.size() ; i++){
        for(int j=0 ; j<vrr[i].size() ; j++){
            cout<<vrr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}