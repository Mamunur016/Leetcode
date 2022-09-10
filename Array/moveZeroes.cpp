#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int>nums= {0,1};
    int count=0;
    sort(nums.begin(),nums.end());
    if(nums.size()!=1){


     for(int i= 0;i<nums.size()-count+1;i++){

        if(nums[i]==0 ){
                nums.erase(nums.begin());
                nums.push_back(0);
                count++;
                cout<<"if end\n";
        }
        cout<<"for lopp end\n";
    }
   }



    for(int i:nums){
        cout<<i<<endl;
    }
}
