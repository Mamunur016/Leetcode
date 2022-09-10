#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int>nums = {3,1,2,4};

    int length=nums.size();
    int e=0,s=0;

    vector<int>odd;

    for(int i=0;i<nums.size();i++){

        if(nums[i]%2==0){
            nums[s]=nums[i];
            s++;
        }
        else{
            odd.push_back(nums[i]);
            e++;
        }
    }
    cout<<"even number "<<s<<endl;

    for(int i:odd){
        cout<<"odd number "<<e<<" "<<i<<endl;
    }

    for(int i=s;i<nums.size();i++){

            if(e){
                nums[i]=odd[e-1];
                e--;
            }

    }




for(int i:nums){

    cout<<i<<endl;
}


}
