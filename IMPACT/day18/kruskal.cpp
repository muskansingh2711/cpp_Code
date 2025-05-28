//Kruskal's Algorithm 

#include <bits/stdc++.h>
using namespace std;
struct Edge {
    int src, dest, weight;
};
struct compare
{
    bool operator() (Edge const &a, Edge const &b) const {
        return a.weight > b.weight;
    }
};
class DisjointSet
{
    unordered_map<int, int> parent;
public:
    void makeSet(int n)
    {
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }
    int Find(int k)
    {
        if (parent[k] == k) {
            return k;
        }
        return Find(parent[k]);
    }
    void Union(int a, int b)
    {
        int x = Find(a);
        int y = Find(b);
        parent[x] = y;
    }
};
vector<Edge> runKruskalAlgorithm(vector<Edge> edges, int n) 
{
    vector<Edge> MST;
    DisjointSet ds;
    ds.makeSet(n);
    sort(edges.begin(), edges.end(), compare());
    while (MST.size() != n - 1)
    {
        Edge next_edge = edges.back();
        edges.pop_back();
        int x = ds.Find(next_edge.src);
        int y = ds.Find(next_edge.dest);
        if (x != y)
        {
            MST.push_back(next_edge);
            ds.Union(x, y);
        }
    }
    return MST;
}
 
int main()
{
    vector<Edge> edges =
    {
        {0, 1, 7}, {1, 2, 8}, {0, 3, 5}, {1, 3, 9}, {1, 4, 7}, {2, 4, 5},
        {3, 4, 15}, {3, 5, 6}, {4, 5, 8}, {4, 6, 9}, {5, 6, 11}
    };
    int n = 7;
    vector<Edge> e = runKruskalAlgorithm(edges, n);
    for (Edge &edge: e)
    {
        cout << "(" << edge.src << ", " << edge.dest << ", "
             << edge.weight << ")" << endl;
    }
    return 0;
}