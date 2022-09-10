#include<bits/stdc++.h>
using namespace std;
bool isValidParenthesis(string s){

  bool ans=true;;
        for(int i=0;i<s.size();++i){

           if(s[i]=='('){
               if(s[i+1]!=')'){
                ans=false;
                break;
               }
              }
              if(s[i]=='['){
               if(s[i+1]!=']'){
                ans=false;
                break;
               }
              }
              if(s[i]=='{'){
               if(s[i+1]!='}'){
                ans=false;
                break;
               }
              }



        }
        return ans;


}

int main()
{

    string s = "(]";
    cout << "Number of words are: " << isValidParenthesis(s)<<endl;;
    return 0;
}

