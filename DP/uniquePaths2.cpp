#include <bits/stdc++.h>
using namespace std;
int countUniquePaths(int i, int j, int m, int n, vector<vector<int>> &obstacleGrid, vector<vector<int>> &dp)
{

    if (i >= m - 1 && j >= n - 1 && obstacleGrid[i][j] == 1)
    {
        return 0;
    }
    if (i == m - 1 && j == n - 1)
    {
        return 1;
    }
    else if (i >= m || j >= n || obstacleGrid[i][j] != 0)
    {
        return 0;
    }

    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }

    return dp[i][j] = countUniquePaths(i + 1, j, m, n, obstacleGrid, dp) + countUniquePaths(i, j + 1, m, n, obstacleGrid, dp);
}
int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
{

    int n = obstacleGrid.size();
    int m = obstacleGrid[0].size();
    vector<vector<int>> dp(n, vector<int>(m, -1));

    return countUniquePaths(0, 0, n, m, obstacleGrid, dp);
}
int main()
{

    return 0;
}