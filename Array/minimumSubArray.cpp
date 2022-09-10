#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums={-2,-3,6,-1,-2,-3,5,-3};
        int currSum=0;
        int minSum=INT_MAX;

        for(auto c:nums){

            currSum = min(c, currSum + c);
            minSum=min(currSum,minSum);
        }

        cout<<minSum<<endl;

        return 0;
}
