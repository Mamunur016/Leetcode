#include <bits/stdc++.h>
using namespace std;

void dfs(int i, int j, vector<vector<int>> &grid)
{

    int n = grid.size();
    int m = grid[0].size();

    if (i < 0 || j < 0)
        return;

    if (i >= n || j >= m)
        return;

    if (grid[i][j] != 1)
        return;

    grid[i][j] = 0;

    dfs(i - 1, j, grid);
    dfs(i + 1, j, grid);
    dfs(i, j - 1, grid);
    dfs(i, j + 1, grid);
}
int numberOfEnclaves(vector<vector<int>> &grid)
{
    // Code here
    int n = grid.size();
    int m = grid[0].size();

    for (int i = 0; i < n; ++i)
    {

        for (int j = 0; j < m; ++j)
        {

            if (i == 0 || j == 0 || i == n - 1 || j == m - 1)
            {
                if (grid[i][j] == 1)
                {
                    dfs(i, j, grid);
                }
            }
        }
    }
    int count = 0;
    for (int i = 0; i < n; ++i)
    {

        for (int j = 0; j < m; ++j)
        {

            if (grid[i][j] == 1)
            {
                ++count;
            }
        }
    }
    return count;
}

int main()
{

    return 0;
}