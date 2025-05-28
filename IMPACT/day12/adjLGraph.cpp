// Graph using adjacency list
#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
    int v;
    vector<vector<int>> adjList;
    Graph(int vert){
        v = vert;
        adjList.resize(v);
    }
    void addEdge(int src, int dest){
        adjList[src].push_back[dest];
        adjList[dest].push_back[src];
    }
    void print(){
        for(int i=0;i<v;i++){
            for(int j =adjList[i].size()-1;j>=0;j--){
                cout<<adjList[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    int v ;
    Graphing = new Graph(v);
    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(1,4);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.printGraph();
}