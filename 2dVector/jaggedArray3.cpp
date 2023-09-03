#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector <int> > vrr;
    vrr.push_back( {1} );
    vrr.push_back( {1,2} );
    vrr.push_back( {1,2,3} );
    vrr.push_back( {1,2,3,4,5} );
    vrr.push_back( {1,2,3,4} );
    vrr.push_back( {1,2,3} );
    vrr.push_back( {1,2} );
    vrr.push_back( {1} );
    
    for(int i=0 ; i < vrr.size() ; i++){
        for(int j=0 ; j < vrr[i].size() ; j++){
            cout<<vrr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}