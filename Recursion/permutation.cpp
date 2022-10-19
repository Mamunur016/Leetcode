#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
void permutation(vector<int> nums, vector<int> ds, vector<bool> &feq)
{

    if (nums.size() == ds.size())
    {
        ans.push_back(ds);
        return;
    }

    for (int i = 0; i < nums.size(); ++i)
    {
        if (!feq[i])
        {
            ds.push_back(nums[i]);
            feq[i] = true;
            permutation(nums, ds, feq);
            feq[i] = false;
            ds.pop_back();
        }
    }
}
vector<vector<int>> permute(vector<int> &nums)
{

    vector<int> ds;
    int n = nums.size();
    vector<bool> feq(n, false);
    permutation(nums, ds, feq);
    return ans;
}
int main()
{

    return 0;
}