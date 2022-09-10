#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string str){

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    auto it = std::remove_if(str.begin(), str.end(), [](char const &c) {
        return !std::isalnum(c);
    });

    str.erase(it, str.end());
    stringstream s;

    s<<str;

    string word;

    str="";

    while(s>>word){

           str+=word;

    }

    string str2=str;
    cout<<str2<<endl;
    reverse(str.begin(),str.end());

    bool ans;
   if(str2==str){

    ans=true;
   }
   else{
    ans=false;
   }

    return ans;


}

int main()
{

    string s = "A man, a plan, a canal: Panama";
    cout << "Number of words are: " << isPalindrome(s)<<endl;;
    return 0;
}
