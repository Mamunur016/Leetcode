#include <bits/stdc++.h>
using namespace std;

bool check(int start, int col, vector<vector<int>> &graph, vector<int> &color)
{

    color[start] = col;

    for (auto child : graph[start])
    {

        if (color[child] == -1)
        {
            if (check(child, !col, graph, color) == false)
                return false;
        }
        else if (color[child] == col)
        {
            return false;
        }
    }

    return true;
}
bool isBipartite(vector<vector<int>> &graph)
{

    int v = graph.size();
    vector<int> color(v, -1);

    for (int i = 0; i < v; ++i)
    {

        if (color[i] == -1)
        {
            if (check(i, 0, graph, color) == false)
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