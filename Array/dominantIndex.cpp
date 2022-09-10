#include<bits/stdc++.h>
using namespace std;
int main(){


        vector<int>nums={0,0,0,1};

        int maxElement= *max_element(nums.begin(),nums.end());
        int maxElementIndex= max_element(nums.begin(),nums.end())-nums.begin();

        int result=-1;

            sort(nums.begin(),nums.end());
            int arr_size=nums.size();
        if(arr_size==1){
                    result=0;

                }

        for ( int i = arr_size - 2; i >= 0; i--) {
        // if the element is not
        // equal to largest element
        if (nums[i] != nums[arr_size - 1]) {

            if( maxElement>=nums[i]*2){
                result=maxElementIndex;
                break;
            }
            else{
                break;
            }

        }
    }




        cout<<result<<endl;;

        cout<<maxElement<<endl;
        cout<<maxElementIndex<<endl;
}
