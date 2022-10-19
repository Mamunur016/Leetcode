#include <bits/stdc++.h>
using namespace std;

bool dfs(int node, vector<int> adj[], vector<bool> &visited, vector<bool> &pathvisited, stack<int> &st)
{

    visited[node] = true;
    pathvisited[node] = true;

    for (auto child : adj[node])
    {
        if (!visited[child])
        {
            if (dfs(child, adj, visited, pathvisited, st))
            {
                return true;
            }
        }
        else if (pathvisited[child])
        {
            return true;
        }
    }

    pathvisited[node] = false;
    st.push(node);
    return false;
}
vector<int> topoSort(int numCourses, vector<vector<int>> &prerequisites)
{
    vector<bool> visited(numCourses, false);
    vector<bool> pathvisited(numCourses, false);
    stack<int> st;
    vector<int> ans;
    vector<int> adj[numCourses];
    for (auto x : prerequisites)
    {
        adj[x[0]].push_back(x[1]);
    }

    for (int i = 0; i < numCourses; ++i)
    {

        if (!visited[i])
        {
            if (dfs(i, adj, visited, pathvisited, st))
            {
                return ans;
            }
        }
    }

    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{

    return 0;
}