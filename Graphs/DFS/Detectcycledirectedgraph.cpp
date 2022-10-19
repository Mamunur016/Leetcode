#include <bits/stdc++.h>
using namespace std;
bool dfs(int node, vector<int> adj[], vector<bool> &visited, vector<bool> &pathVisited)
{

    visited[node] = true;
    pathVisited[node] = true;

    for (auto child : adj[node])
    {

        if (!visited[child] && !pathVisited[child])
        {
            if (dfs(child, adj, visited, pathVisited))
            {
                return true;
            }
        }
        else if (visited[child] && pathVisited[child])
        {
            return true;
        }
    }

    pathVisited[node] = false;
    return false;
}
bool isCyclic(int V, vector<int> adj[])
{
    // code here
    vector<bool> visited(V, false);
    vector<bool> pathVisited(V, false);

    for (int i = 0; i < V; ++i)
    {

        if (!visited[i])
        {
            if (dfs(i, adj, visited, pathVisited))
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{

    return 0;
}