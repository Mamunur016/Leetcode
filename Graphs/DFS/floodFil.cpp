#include <bits/stdc++.h>
using namespace std;

void dfs(int i, int j, vector<vector<int>> &image, int initialColor, int color)
{
    int n = image.size();
    int m = image[0].size();

    if (i < 0 || j < 0)
        return;

    if (i >= n || j >= m)
        return;

    if (image[i][j] != initialColor)
        return;

    image[i][j] = color;

    dfs(i - 1, j, image, initialColor, color);
    dfs(i + 1, j, image, initialColor, color);
    dfs(i, j - 1, image, initialColor, color);
    dfs(i, j + 1, image, initialColor, color);
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
{
    int initialColor = image[sr][sc];

    if (initialColor != color)
    {
        dfs(sr, sc, image, initialColor, color);
    }
}
int main()
{

    return 0;
}