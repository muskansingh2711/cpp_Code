//Dijkstra's Algorithm...

#include<bits/stdc++.h>
using namespace std;

struct Edge {
    int source, dest, weight;
};
struct Node {
    int vertex, weight;
};
class Graph
{
public:
    vector<vector<Edge>> adjList;
    Graph(vector<Edge> const &edges, int n)
    {
        adjList.resize(n);
        for (Edge const &edge: edges)
        {
            adjList[edge.source].push_back(edge);
        }
    }
};
 
void printPath(vector<int> const &prev, int i, int source)
{
    if (i < 0) {
        return;
    }
    printPath(prev, prev[i], source);
    if (i != source) {
        cout << ", ";
    }
    cout << i;
}

struct comp
{
    bool operator()(const Node &lhs, const Node &rhs) const {
        return lhs.weight > rhs.weight;
    }
};
void findShortestPaths(Graph const &graph, int source, int n)
{
    priority_queue<Node, vector<Node>, comp> min_heap;
    min_heap.push({source, 0});
    vector<int> dist(n, INT_MAX);
    dist[source] = 0;
    vector<bool> done(n, false);
    done[source] = true;
    vector<int> prev(n, -1);
    while (!min_heap.empty())
    {
        Node node = min_heap.top();
        min_heap.pop();
        int u = node.vertex;
        //if(done[u])continue;
        for (auto i: graph.adjList[u])
        {
            int v = i.dest;
            int weight = i.weight;
            if (!done[v] && (dist[u] + weight) < dist[v])
            {
                dist[v] = dist[u] + weight;
                prev[v] = u;
                min_heap.push({v, dist[v]});
            }
        }
        done[u] = true;
    }
 
    for (int i = 0; i < n; i++)
    {
        if (i != source && dist[i] != INT_MAX)
        {
            cout << "Path (" << source << " —> " << i << "): Minimum cost = "
                 << dist[i] << ", Route = [";
            printPath(prev, i, source);
            cout << "]" << endl;
        }
    }
}
 
int main()
{
    int v;int e;
    
    cin>>v>>e;
    vector<Edge> edges;
    while(e-- >0)
    {
        Edge g;
        cin>>g.source>>g.dest>>g.weight;
        edges.push_back(g);
    }
    Graph graph(edges, v);
    for (int source = 0; source < v; source++) {
        findShortestPaths(graph, source, v);
    }
    return 0;
}