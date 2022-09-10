#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;

        switch(num>=1 && num<=10){

            case(1):
                switch(num%2){
                case 1:
                    cout<<"Odd"<<endl;
                    break;
                case 0:
                    cout<<"Even"<<endl;
                    break;
                }
                break;

                case 0:
                    switch(num>=11 && num<=100){

                    case 1:
                        switch(num%3){
                        case 0:
                            cout<<"Yes";
                            break;

                        case 1:
                            cout<<"No";
                            break;
                        case 2:
                            cout<<"Very Good";
                            break;
                        }
                        break;

                        case 0:
                            switch(num>100){
                            case 1:
                                cout<<"Go to the hell";
                                break;
                            }
                    }


        }
    return 0;

}

