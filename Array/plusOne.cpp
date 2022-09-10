#include<bits/stdc++.h>
using namespace std;



int main(){


    vector<int>digits={9,8,9,9};

    int arr_size=digits.size();


    if(digits[arr_size-1]==9 && arr_size==1){
        digits.push_back(0);
        digits[arr_size-1]=1;

    }
    else if(digits[arr_size-1]==9){
            digits[arr_size-1]=0;
            for(int i=arr_size-2;i>=0;i--){
                if(digits[i]==9 && i==0){
                    digits[i]=0;
                    digits.insert(digits.begin(),1);
                }
                else if(digits[i]==9){
                    digits[i]=0;
                }
                else{
                    digits[i]=digits[i]+1;
                    break;
                }
            }

    }
    else
    digits[arr_size-1]=digits[arr_size-1]+1;


    for(int i:digits){

        cout<<i<<" ";
    }



}
