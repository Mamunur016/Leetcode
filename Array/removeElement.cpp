#include<bits/stdc++.h>
using namespace std;
int main(){


    vector<int>nums = {3,2,2,3};
    int val = 3,s=0;

    for(int i=0;i<nums.size();i++){

        if(nums[i]!=val){
            nums[s]=nums[i];
            s++;
        }
    }


    for(int i:nums){
        cout<<i<<endl;
    }

}
