#include<bits/stdc++.h>
using namespace std;
int lengthOfLastWord(string str){


    stringstream s;

    s<<str;

   vector<string>m;

    string word;

    while(s>>word){

            m.push_back(word);

    }

    reverse(m.begin(),m.end());

    int ans=m[0].size();
    return ans;


}

int main()
{

    string s = "geeks for geeks geeks "
               "contribution placements";
    cout << "Number of words are: " << lengthOfLastWord(s)<<endl;;
    return 0;
}
