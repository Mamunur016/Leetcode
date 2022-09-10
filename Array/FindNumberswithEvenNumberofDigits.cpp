#include<bits/stdc++.h>
using namespace std;
int count_digit(int n){
    string num= to_string(n);
    int z=num.size();
    return z;
}
int main()
{

int nums[]={12,34,5,566,456};
int count=0,result=0;



for(const int &n:nums){

   int ans=count_digit(n);

    if(ans%2==0 ){
    ++count;
    }


}

cout<<count;



}

