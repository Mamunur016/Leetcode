#include<bits/stdc++.h>
using namespace std;

int main(){

    string  a = "", b = "0";

    int m,n,diff;




    if(a.size()>b.size()){
        swap(a,b);
    }
    m=a.size();
    n=b.size();
    diff=n-m;
    string padding;
    string res;
    char carry='0';
    for(int i=0;i<diff;++i){
       padding.push_back('0');
    }
    a=padding+a;

    for(int i=n-1;i>=0;--i){
        if(a[i]=='1' && b[i]=='1'){
            if(carry=='1'){
                res.push_back('1');
                carry='1';
            }
            else{
                res.push_back('0');
                carry='1';
            }
        }
        else if(a[i]=='0' && b[i]=='0'){

            if(carry=='1'){
                res.push_back('1');
                carry='0';
            }
            else{
                res.push_back('0');
                carry='0';
            }
        }
        else{
            if(carry=='1'){
                res.push_back('0');
                carry='1';
            }
            else{
                res.push_back('1');
                carry='0';
            }
        }
    }
    if(carry=='1'){
        res.push_back('1');
    }
    reverse(res.begin(),res.end());
    cout<<a<<" "<<b;
    cout<<"\n"<<res<<endl;
}
