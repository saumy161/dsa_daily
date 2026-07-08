#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> graph;
vector<bool> visited;

void dfs(int node)
{
    visited[node] = true;
    cout << node << " ";

    for (int neighbour : graph[node])
    {
        if (!visited[neighbour])
            dfs(neighbour);
    }
}

int main()
{
    int V, E;
    cin >> V >> E;

    graph.resize(V);
    visited.resize(V, false);

    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u);   // Remove this line for a directed graph
    }

    dfs(0); // Start DFS from node 0

    return 0;
}