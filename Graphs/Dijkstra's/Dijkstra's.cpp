#include <bits/stdc++.h>
using namespace std;

vector<int> dijkstra(int V, vector<vector<int>> adj[], int S)
{
    // Code here
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    vector<int> dis(V);
    for (int i = 0; i < V; ++i)
    {
        dis[i] = 1e9;
    }

    dis[S] = 0;
    pq.push({0, S});

    while (!pq.empty())
    {

        int dist = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        for (auto it : adj[node])
        {

            int edgWeight = it[1];
            int adjNode = it[0];

            if (dist + edgWeight < dis[adjNode])
            {
                dis[adjNode] = dist + edgWeight;
                pq.push({dis[adjNode], adjNode});
            }
        }
    }

    return dis;
}
int main()
{

    return 0;
}