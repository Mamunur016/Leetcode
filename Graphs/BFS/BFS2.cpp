#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> g[N];

bool vis[N];

void BFS(int source)
{
    queue<int> q;
    q.push(source);
    vis[source] = 1;

    while (!q.empty())
    {
        int curr_v = q.front();

        cout << curr_v << " ";
        q.pop();

        for (int child : g[curr_v])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = 1;
            }
        }
    }
}
int main()
{
    int v, e;

    cin >> v >> e;

    for (int i = 0; i < e; ++i)
    {

        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    BFS(0);

    return 0;
}

/// O(V+E)