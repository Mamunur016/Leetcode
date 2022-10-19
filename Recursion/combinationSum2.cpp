#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;

void findCombination(int idx, int target, vector<int> ds, vector<int> &candidates)
{

    if (target == 0)
    {

        ans.push_back(ds);
        return;
    }

    for (int i = idx; i < candidates.size(); ++i)
    {

        if (i > idx && candidates[i] == candidates[i - 1])
        {
            continue;
        }
        if (candidates[i] > target)
        {
            break;
        }
        ds.push_back(candidates[i]);
        findCombination(i + 1, target - candidates[i], ds, candidates);
        ds.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{

    vector<int> ds;
    sort(candidates.begin(), candidates.end());
    findCombination(0, target, ds, candidates);
    return ans;
}
int main()
{

    return 0;
}