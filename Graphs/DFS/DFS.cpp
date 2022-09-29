#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> g[N];

bool vis[N];

void DFS(int vertex)
{

    // if (vis[vertex])
    //     return;
    vis[vertex] = true;
    cout << vertex << " ";
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

    for (int i = 0; i < 6; ++i)
    {

        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    DFS(2);

    return 0;
}

/// O(V+E)