#include <bits/stdc++.h>
using namespace std;
int orangesRotting(vector<vector<int>> &grid)
{

    vector<int> dir = {-1, 0, 1, 0, -1};

    int m = grid.size();
    int n = grid[0].size();

    int fresh = 0;
    queue<pair<int, int>> q;

    for (int i = 0; i < m; ++i)
    {

        for (int j = 0; j < n; ++j)
        {

            if (grid[i][j] == 2)
            {
                q.push({i, j});
            }
            else if (grid[i][j] == 1)
            {
                fresh++;
            }
        }
    }
    int ans = -1;

    while (!q.empty())
    {

        int sz = q.size();

        while (sz--)
        {
            pair<int, int> p = q.front();
            q.pop();

            for (int i = 0; i < 4; ++i)
            {

                int r = p.first + dir[i];
                int c = p.second + dir[i + 1];

                if (r >= 0 && r < m && c >= 0 && c < n && grid[r][c] == 1)
                {
                    grid[r][c] = 2;
                    q.push({r, c});
                    fresh--;
                }
            }
        }

        ans++;
    }

    if (fresh > 0)
    {
        return -1;
    }
    if (ans == -1)
    {
        return 0;
    }
    return ans;
}
int main()
{
    vector<vector<int>> grid{{0, 1, 2}, {0, 1, 2}, {2, 1, 1}};

    int ans = orangesRotting(grid);
    cout << ans << "\n";
    return 0;
}