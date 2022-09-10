#include<bits/stdc++.h>
using namespace std;
string reverseWords(string str){


    stringstream s;

    s<<str;

   vector<string>m;

    string word;

    while(s>>word){
            ///cout<<word<<" ";
            m.push_back(word);

    }
    str="";

     for(int i=0;i<m.size();++i){

        if(i<m.size()-1)
        {
            reverse(m[i].begin(),m[i].end());
           str= str + m[i] +" ";
        }
        else{
                reverse(m[i].begin(),m[i].end());
             str= str + m[i];
        }


    }

    return str;


}

int main()
{

    string s = "geeks for geeks geeks "
               "contribution placements";
    cout << "Number of words are: " << reverseWords(s)<<endl;;
    return 0;
}

