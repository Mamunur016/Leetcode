#include<bits/stdc++.h>
using namespace std;
int main(){


    vector<int>nums={2,3,1,2,4,3};
    int target=7,sum=0,s,l=1;
    vector<int>ans;

    sort(nums.begin(),nums.end());

    for(int i=nums.size()-1;i>=0;--i){
        if(sum<target){
            if(nums[i]+sum>=target){
                ans.push_back(nums[i]);
                 sum+=nums[i];
                break;
            }
            else if(nums[i]+sum<target){
                ans.push_back(nums[i]);
                sum+=nums[i];
            }
        }
    }







    if(sum>=target){
         s=ans.size();
    }
    else{
        s=0;
    }




    cout<<s<<endl;

    for(int i:ans){
        cout<<i<<" ";
    }

}
