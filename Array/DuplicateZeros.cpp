#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector <int> nums={1,34,5,6,342,0,535,6};
   int count=0;
         vector<int> v;

    for(int i=0;i<nums.size();i++){

            if(nums[i]==0){
             v.push_back(0);
             v.push_back(0);
                ++count;
            }
            else{
                v.push_back(nums[i]);
            }
    }
        while(count--){
            v.pop_back();
        }
    nums.clear();
    nums =v;


    for(const int i:nums){
        cout<<i<<endl;
    }
}
