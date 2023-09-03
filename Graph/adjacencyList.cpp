#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class graph{

    public:

    void addEdge(unordered_map<int , list<int> > &adj ,int u , int v , int directed){
        adj[u].push_back(v);

        if( directed == 0){ // undirected graph
           adj[v].push_back(u);
        }

    }

    void printAdj(unordered_map<int , list<int> > adj){
        for( auto i : adj){
            cout<<i.first<<"->";
            for( auto j : i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }

};

int main(){

    int n , m , u , v;
    unordered_map<int , list<int> > adj;
    graph g;

    cout<<"Enter total nodes:";
    cin>>n;
    cout<<"Enter total edges:";
    cin>>m;

    cout<<"Enter node:";
    for( int i = 0 ; i < m ; i++){
        cin>>u>>v;
        //0 for undirected graph
        g.addEdge( adj ,u , v , 0 );
    }
    cout<<"Connection is as follow:"<<endl;

    g.printAdj( adj);

    return 0 ;

}