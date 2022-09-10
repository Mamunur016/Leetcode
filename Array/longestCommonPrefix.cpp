#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<string> str={"flower","flow","flight"};

    int n=str.size();
    sort(str.begin(),str.end());

    string ans="";
    string a=str[0];
    string b=str[n-1];

    for(int i=0;i<a.size();++i){


        if(a[i]==b[i]){
            ans+=a[i];
        }
        else{
            break;
        }
    }


        cout<<ans<<endl;



}
