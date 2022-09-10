#include<bits/stdc++.h>
using namespace std;
int main()
{

       string s="loveleetcode";

       int d;
       char c='e';
        int n=s.size();
        vector<int>res;
        vector<int>ans;

        for(int i=0;i<n;++i){
            if(s[i]==c){
                res.push_back(i);
            }
        }

        int left=0,right=0;
        int cnt=0;
        for(int i=0;i<n;++i){

            if(i>res[right]){

                    left=right;
            if(right<res.size()-1){
                ++right;

            }

        }
         int m=min(abs(i-res[left]),abs(i-res[right]));
            ans.push_back(m);
        }

        for(auto i:ans){
            cout<<i<<" ";
        }

}





