#include <bits/stdc++.h>
using namespace std;

set<vector<int>> res;
void permutation(vector<int> &nums, vector<int> ds, vector<bool> feq)
{

    if (nums.size() == ds.size())
    {
        res.insert(ds);
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
vector<vector<int>> permuteUnique(vector<int> &nums)
{

    int n = nums.size();
    vector<bool> feq(n, false);
    vector<vector<int>> ans;
    vector<int> ds;
    permutation(nums, ds, feq);

    for (auto x : res)
    {
        ans.push_back(x);
    }

    return ans;
}
int main()
{

    return 0;
}