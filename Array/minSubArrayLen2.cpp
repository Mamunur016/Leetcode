#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>nums= {1,1,1,1,1,1,1,1};
    int s= 11;

    int n = nums.size(), len = INT_MAX;
    cout<<len<<endl;
        vector<int> sums(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            sums[i] = sums[i - 1] + nums[i - 1];
        }
        for (int i = n; i >= 0 && sums[i] >= s; i--) {
            int j = upper_bound(sums.begin(), sums.end(), sums[i] - s) - sums.begin();
            cout<<i<<"i\n";
            cout<<j<<"j \n";
            len = min(len, i - j + 1);
            cout<<len<<"len ";
            cout<<"\n-----\n";
        }
        cout<<endl;
         len == INT_MAX ? 0 : len;


    cout<<len<<endl;
}
