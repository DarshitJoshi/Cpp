#include<iostream>
#include<vector>

using namespace std;
int main()
{
    int m,n,key;

    vector<vector<int> > vrr;    
    // 2-Dimensional array
    //vrr mai keval whi element ayenge jo inner bracket mai likha hai i.e, vector<int>

    cin>>m; //ROW
    cin>>n; //COLUMN

    cout<<"Enter Elements:";

    for(int i=0 ; i<m ; i++)
    {
        vector<int> temp;
        for(int j=0 ; j<n ; j++)
        {
            cin>>key;
            temp.push_back(key);
        }
        vrr.push_back(temp); //vrr keval vector ko le skta hai.
    }

    for(int i=0 ; i<m ; i++)
    {
        
        for(int j=0 ; j<n ; j++)
        {
            cout<<vrr[i][j]<<" ";
        }
        cout<<endl;
    }



} 
