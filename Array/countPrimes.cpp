#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
int arr[N];

int main(){
    int n;
    bool b;
    cin>>n;

      for(int i=2;i<n;++i){
        b=true;
        for(int j=2;j<=sqrt(i);++j){
            if(i%j==0){

               b=false;
            }
        }

        if(b){

            arr[i]++;
        }
    }

    for(int i=1;i<=n;++i){
        arr[i]+=arr[i-1];
    }

    cout<<arr[n]<<endl;
}
