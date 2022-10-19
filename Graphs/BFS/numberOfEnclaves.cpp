#include <bits/stdc++.h>
using namespace std;
int numEnclaves(vector<vector<int>> &grid)
{

    int n = grid.size();
    int m = grid[0].size();
    queue<pair<int, int>> q;
    vector<vector<int>> visited(n, vector<int>(m, 0));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {

            if (i == 0 || j == 0 || i == n - 1 || j == m - 1)
            {
                if (grid[i][j] == 1)
                {
                    q.push({i, j});
                    visited[i][j] = 1;
                }
            }
        }
    }
    vector<int> dir = {-1, 0, 1, 0, -1};

    while (!q.empty())
    {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();

        for (int i = 0; i < 4; ++i)
        {
            int srow = row + dir[i];
            int scol = col + dir[i + 1];
            if (srow >= 0 && scol >= 0 && srow < n && scol < m && visited[srow][scol] == 0 && grid[srow][scol] == 1)
            {
                visited[srow][scol] = 1;
                q.push({srow, scol});
            }
        }
    }
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {

            if (grid[i][j] == 1 && visited[i][j] == 0)
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{

    return 0;
}
