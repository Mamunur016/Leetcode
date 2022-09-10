#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;

    if(num>=1 && num<=10){
        if(num%2==0){
            cout<<"Even Number"<<endl;
        }
        else{
            cout<<"Odd Number"<<endl;
        }
    }
    else if(num>=11 && num<=100){
        if(num%3==0){
            cout<<"Yes"<<endl;
        }
        else if(num%3==1){
            cout<<"No"<<endl;
        }
        else if(num%3==2){
            cout<<"Very Good"<<endl;
        }
    }
    else if(num>100){
        cout<<"Go to the hell"<<endl;
    }

    return 0;

}
