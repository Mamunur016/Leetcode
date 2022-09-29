
// Given n, i.e. total number of nodes in an undirected graph numbered from 1 to n and an integer e, i.e. total number of edges in the graph. Calculate the total number of connected components in the graph. A connected component is a set of vertices in a graph that are linked to each other by paths.

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> g[N];

bool vis[N];
vector<vector<int>> cc;
vector<int> current_cc;
void DFS(int vertex)
{

    // if (vis[vertex])
    //     return;
    vis[vertex] = true;
    current_cc.push_back(vertex);
    // cout << vertex << " ";
    for (int child : g[vertex])
    {
        if (vis[child])
            continue;
        DFS(child);
    }
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

    int cnt = 0;

    for (int i = 1; i <= n; ++i)
    {
        if (vis[i])
            continue;

        current_cc.clear();
        DFS(i);
        cc.push_back(current_cc);
        cnt++;
    }

    cout << cnt << endl;

    for (auto x : cc)
    {

        for (auto d : x)
        {
            cout << d << " ";
        }

        cout << endl;
    }

    return 0;
}

/// O(V+E)