#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int>arr={0,1,2,3,4,5,6,7,8,9};

    for (int i = 0; i < arr.size(); i++)
    {
        cout<< arr[i]<<" ";
    }


        bool b=true;
        if(arr.size()>=3){
            int max=  max_element(arr.begin(),arr.end() ) - arr.begin();
            int n=*max_element(arr.begin(),arr.end());
            cout<<"\n"<<n<<endl;
            if(max==arr.size()-1 || 0 ){
                b= false;
            }
            for(int i= 0;i<max;i++){
                if(arr[i]>= arr[i+1]){
                    b= false;
                }
            }
            for(int i= max;i<arr.size()-1;i++){
                if(arr[i]<= arr[i+1]){
                    b= false;
                }
            }
        }
        else{
            b= false;
        }
        cout<<"\n"<<b<<"\n";


    return 0;
}
