#include <bits/stdc++.h>
using namespace std;

vector<int> topoSort(int V, vector<int> adj[])
{
    // code here
    vector<int> indegree(V, 0);

    for (int i = 0; i < V; i++)
    {
        for (auto child : adj[i])
        {
            indegree[child]++;
        }
    }
    queue<int> q;

    for (int i = 0; i < V; ++i)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }

    vector<int> ans;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        ans.push_back(node);

        for (auto child : adj[node])
        {

            indegree[child]--;
            if (indegree[child] == 0)
            {
                q.push(child);
            }
        }
    }

    return ans;
}
int main()
{

    return 0;
}