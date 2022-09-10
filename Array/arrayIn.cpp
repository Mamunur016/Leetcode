

#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector <int> nums={400};
   int count;
   int length=nums.size();


    for(int i=0;i<nums.size();i++){

           if(i==nums.size()-1){
            nums[i]=-1;
           }
           else{

            int n=*max_element(nums.begin()+i+1,nums.end());
            nums[i]=n;
           }


    }


cout<<"vai kmn achen\n";
    for(const int i:nums){
        cout<<i<<endl;
    }
}
