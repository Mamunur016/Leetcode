#include<bits/stdc++.h>
using namespace std;

int main()
{


    vector<int>nums= {4,3,2,7,2,3,1};
    int ln=nums.size();
    vector<int> arr(ln+1,0);
       vector<int>v;

    for(int i=0;i<nums.size();i++){
        arr[nums[i]]++;
    }


    for(int i=1;i<=arr.size();i++){

            if(arr[i]==0)
            {
                v.push_back(i);

            }

    }


    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}
