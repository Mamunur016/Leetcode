#include<bits/stdc++.h>
using namespace std;
int main()

{
   vector<int> m = {1,2,3,4,5,6,7};

    int s=m.size();
   int l,n=3;
   l=s-n;
   vector<int>nums=m;
    m.clear();
   m.insert(m.end(),nums.begin()+l,nums.end());
   nums.resize(l);
   m.insert(m.end(),nums.begin(),nums.end());




        for(int i:m){

            cout<<i<<" ";
        }
}
