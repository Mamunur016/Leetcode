#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> adj[], vector<bool> &visited)
{

    visited[node] = true;

    for (auto child : adj[node])
    {
        if (!visited[child])
        {
            dfs(child, adj, visited);
        }
    }
}
int findCircleNum(vector<vector<int>> &isConnected)
{

    int v = isConnected.size();
    vector<bool> visited(v, false);
    vector<int> adj[v];

    for (int i = 0; i < v; ++i)
    {

        for (int j = 0; j < v; ++j)
        {

            if (isConnected[i][j] == 1 && i != j)
            {

                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }

    int count = 0;

    for (int i = 0; i < v; ++i)
    {

        if (!visited[i])
        {
            dfs(i, adj, visited);
            ++count;
        }
    }
    return count;
}