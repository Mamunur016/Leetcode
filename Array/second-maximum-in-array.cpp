#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> nums={2,2,5};


 set<int>s;
  int third_max_num=0,second_max_num=0,third_min_num=0,second_min_num=0;
    for(int i=0;i<nums.size();i++){
        s.insert(nums[i]);

    }
     nums.clear();
        for(auto itr:s){
            nums.push_back(itr);
        }

   if(nums.size()<3){

    second_min_num=*min_element(nums.begin(),nums.end());
    third_min_num=*max_element(nums.begin(),nums.end());
    second_max_num=*max_element(nums.begin(),nums.end());
    third_max_num=*min_element(nums.begin(),nums.end());
   }
   else{
   sort(nums.begin(),nums.end());
    second_min_num=nums[1];
    third_min_num=nums[2];

    second_max_num=nums[nums.size()-2];
    third_max_num=nums[nums.size()-3];

   }







   /*
   else{
    sort(nums.begin(),nums.end());
    second_min_num=nums[1];
    third_min_num=nums[2];

    second_max_num=nums[nums.size()-2];
    third_max_num=nums[nums.size()-1];

   }*/



   cout<<second_min_num<<" "<<third_min_num<<endl;
   cout<<second_max_num<<" "<<third_max_num<<endl;

}
