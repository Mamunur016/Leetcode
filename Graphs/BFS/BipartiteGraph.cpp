#include <bits/stdc++.h>
using namespace std;
bool check(int start, vector<int> adj[], vector<int> &color)
{

    queue<int> q;
    q.push(start);
    color[start] = 0;

    while (!q.empty())
    {

        int node = q.front();
        q.pop();

        for (auto child : adj[node])
        {

            if (color[child] == -1)
            {
                color[child] = !color[node];
                q.push(child);
            }
            else if (color[child] == color[node])
            {
                return false;
            }
        }
    }
    return true;
}
bool isBipartite(int V, vector<int> adj[])
{
    // Code here
    vector<int> color(V, -1);

    for (int i = 0; i < V; ++i)
    {

        if (color[i] == -1)
        {
            if (check(i, adj, color) == false)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{

    return 0;
}