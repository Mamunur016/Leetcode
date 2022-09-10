#include<bits/stdc++.h>
using namespace std;
int main(){

     int n;
     cin>>n;

        vector<int>u(1000);
        u[0]=1;

        for(int i=2;i<=1690;++i){
            int h=i;
            for(int j=2;j<6 && i;++j){

                while(i%j==0){
                    i/=j;
                }

            }
            if(i==1){
                    u.push_back(h);
                }
        }
        int ans=u[n-1];
        cout<<ans;
        return 0;


}
