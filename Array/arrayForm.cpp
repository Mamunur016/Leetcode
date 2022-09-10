#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>num={1,2,0,0};
       int ans=0,k=34;
        for(int i=0;i<num.size();++i){

            ans=ans*10+num[i];

        }

        ans+=k;

        vector<int>p;

        while(ans){
            int tmp;
            tmp=ans%10;
            p.push_back(tmp);
            ans=ans/10;
        }
        reverse(p.begin(),p.end());
        for(auto i:p){
            cout<<i<<" ";
        }

        return 0;


}
