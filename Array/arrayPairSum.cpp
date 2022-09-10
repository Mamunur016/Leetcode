#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>nums={1,4,3,2};
    int sum=0;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();++i ){
        if(i%2==0){
            sum=sum+nums[i];
        }
    }

    cout<<sum<<endl;
}
