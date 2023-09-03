#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int row,col;
    int key;
    cout<<"Enter total  number of rows:";
    cin>>row;

    cout<<"Enter total  number of columns:";
    cin>>col;

    vector<vector<int> > vrr(row);

    for(int i=0 ; i < vrr.size() ; i++){
        cout<<"Enter column in "<<i+1<<" row:";
        cin>>key;
        vrr[i].resize(key);
    }

    cout<<"Enter the elements of "<<row<<"x"<<col<<" matrix:"<<endl;
    for(int i=0 ; i<vrr.size() ; i++){
        cout<<"Enter elements of "<<i+1<<" row:";
        for(int j=0 ; j<vrr[i].size() ; j++){
            cin>>key;
            vrr[i][j]=key;
        }
    }

    cout<<"Elements are:"<<endl;
    for(int i=0 ; i<vrr.size() ; i++){
        for(int j=0 ; j<vrr[i].size() ; j++){
            cout<<vrr[i][j]<<" ";
        }
        cout<<endl;
    }
}
