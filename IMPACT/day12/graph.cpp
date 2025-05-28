// You are using GCC
#include<bits/stdc++.h>
using namespace std;

class Graph {
    public:
    int V;
    vector<vector<int> > adjList;
    Graph(int vertices)
    {
        V = vertices;
        adjList.resize(vertices);
    }
    void addEdge(int src, int dest)
    {
        adjList[src].push_back(dest);
        adjList[dest].push_back(src);
    }
void bfs()
{
int s=0;
vector<int> res;
queue<int> q;
vector<bool> visit(V,false);
visit[s]=true;
q.push(s);
while(!q.empty())
{
int curr=q.front();
q.pop();
res.push_back(curr);
for(int x:adjList[curr])
{  
    if(!visit[x])
    {
	visit[x]=true;
	q.push(x);
     }
}
}
for(int i:res)
cout<<i<<" ";
}
};
int main()
{
int v;
cin>>v;
Graph g(v);
g.addEdge(0,1);
g.addEdge(0,2);
g.addEdge(1,3);
g.addEdge(1,4);
g.addEdge(2,3);
g.addEdge(2,4);
g.addEdge(3,4);
g.addEdge(3,5);
g.addEdge(4,5);
vector<int> res;
g.bfs();

}
