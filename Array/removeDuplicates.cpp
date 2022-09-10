#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int>nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    int size=nums.size();
    for(int i=nums.size()-2;i>=0;i--){

        if(nums[i]==nums[i+1]){

            for(int j=i+1;j<size;j++){
                nums[j-1]=nums[j];

            }
            size--;
        }


    }


    for(int i=0;i<size;i++){
        cout<<nums[i]<<endl;
    }


}
