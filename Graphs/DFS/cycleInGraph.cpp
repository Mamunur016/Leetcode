#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> g[N];

bool vis[N];

bool DFS(int vertex, int parent)
{

    // if (vis[vertex])
    //     return;
    vis[vertex] = true;
    bool isLoopExists = false;
    for (int child : g[vertex])
    {
        if (vis[child] && child == parent)
            continue;
        if (vis[child])
            true;
        isLoopExists |= DFS(child, vertex);
    }

    return isLoopExists;
}
int main()
{
    int n, m;

    cin >> n >> m;

    for (int i = 0; i < m; ++i)
    {

        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    bool isLoopExists = false;
    for (int i = 1; i <= n; ++i)
    {
        if (vis[i])
            continue;

        if (DFS(i, 0))
        {
            isLoopExists = true;
            break;
        }
    }

    if (isLoopExists)
    {
        cout << "Exists";
    }

    return 0;
}

/// O(V+E)