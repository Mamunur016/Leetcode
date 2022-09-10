#include<bits/stdc++.h>
using namespace std;
int main()
{

   vector<int> nums = {2,2,3,1};
   set<int>s;
   int num;
    for(int i=0;i<nums.size();i++){
        s.insert(nums[i]);

    }
     nums.clear();
        for(auto itr:s){
            nums.push_back(itr);
        }

   if(nums.size()<3){

    num=*max_element(nums.begin(),nums.end());
   }
   else{
   sort(nums.begin(),nums.end(), greater<int>());
    num=nums[2];
   }
   for(int i:nums){
    cout<<i<<endl;
   }
   cout<<"end loop\n";

   cout<<num;

}
