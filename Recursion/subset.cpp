#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> all_subsets;

/// subset generator
void generate(vector<int> &subset, int i, vector<int> &nums)
{

    if (i == nums.size())
    {
        all_subsets.push_back(subset);
        return;
    }

    /// ith element in subset

    subset.push_back(nums[i]);
    generate(subset, i + 1, nums);
    subset.pop_back();
    generate(subset, i + 1, nums);
}
vector<vector<int>> subsets(vector<int> &nums)
{

    vector<int> empty;

    generate(empty, 0, nums);

    return all_subsets;
}
int main()
{

    return 0;
}