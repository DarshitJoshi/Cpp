//with disconnected
#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>
#include<queue>
using namespace std;

class graph{

    public:

    void addEdge(unordered_map<int , list<int> > &adj, int u , int v , int directed){
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

    void BFS(unordered_map<int , list<int> > adj, int s, vector<bool> &visited){

        queue<int> q; 

        visited[s] = true;
        q.push(s);

        while( !q.empty() ){
            int u = q.front();
            q.pop();

            cout<<u<<" ";

            for( auto v : adj[u]){

                if( visited[v] == false){
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
    }

    void DisBFS(unordered_map<int , list<int> > adj , int v ){

        vector<bool> visited( v ,false);
        for( int i = 0 ; i < v ; i ++){
            if( visited[i] == false){
                BFS(adj , i , visited);
            }
        }
        
    }

};

int main(){

    int n , m , u , v;
    graph g;
    unordered_map<int , list<int> > adj;

    cout<<"Enter total nodes:";
    cin>>n;
    cout<<"Enter total edges/vertex:";
    cin>>m;

    cout<<"Enter node:";
    for( int i = 0 ; i < m ; i++){
        cin>>u>>v;
        //0 for undirected graph
        g.addEdge( adj , u , v , 0 );
    }

    cout<<"Result is as follow:"<<endl;
    g.printAdj(adj);

    cout<<"Elements of the graph are:";
    g.DisBFS( adj , m  );

    return 0 ;

}