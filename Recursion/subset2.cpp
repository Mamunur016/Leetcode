#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> all_subsets;

/// subset generator
void generate(vector<int> &subset, int idx, vector<int> &nums)
{

    all_subsets.push_back(subset);
    for (int i = idx; i < nums.size(); ++i)
    {

        if (i > idx && nums[i] == nums[i - 1])
        {
            continue;
        }
        subset.push_back(nums[i]);
        generate(subset, i + 1, nums);
        subset.pop_back();
    }
}

vector<vector<int>> subsetsWithDup(vector<int> &nums)
{

    vector<int> empty;
    sort(nums.begin(), nums.end());
    generate(empty, 0, nums);

    return all_subsets;
}
int main()
{

    return 0;
}