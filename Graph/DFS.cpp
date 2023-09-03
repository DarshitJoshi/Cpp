#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>
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

    void DfsRecurrene(unordered_map<int , list<int> > adj , 
    int s , vector<bool> & visited){

        visited[s] = true;
        cout<<s<<" "; 

       for( int i : adj[s]){
        if( visited[i] == false){
            DfsRecurrene(adj , i  , visited );
        }
       }

    }

    void DFS( unordered_map<int , list<int> > adj , int m ){

        vector<bool> visited(m , false);

        for( int i = 0 ; i < m; i++){
            if( visited[i] == false){
                DfsRecurrene( adj , i , visited);
            }
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

    g.printAdj(adj);

    cout<<"DFS traversal is as follow:";
    g.DFS(adj , m );

    return 0 ;

}