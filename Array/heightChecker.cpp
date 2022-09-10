#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>heights={5,1,2,3,4};
    vector<int>v=heights;
        int s=0,in=0;
        sort(v.begin(),v.end());

        for(int i=0;i<heights.size();i++){

            if(heights[i]!=v[s]){
                in++;
            }
            s++;
        }

        cout<<in<<endl;


    for(int i:heights){
        cout<<i<<endl;
    }

}

