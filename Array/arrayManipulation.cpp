#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
long long int arr[N];
int main()
{

    int m,n;
    cout<<N<<endl;
    cin>>m>>n;

    while(n--){

        int a,b,d;

        cin>>a>>b>>d;
        arr[a]+=d;
        arr[b+1]=-d;
    }

    for(int i=1;i<=m;++i){
        arr[i]=arr[i]+arr[i-1];
    }

    long long mx=-1;

    for(int i=1;i<=m;++i){
           // cout<<arr[i]<<" ";
        if(arr[i]>mx){
            mx=arr[i];
        }
    }

    cout<<mx<<endl;

    return 0;

}
