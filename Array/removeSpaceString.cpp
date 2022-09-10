#include<bits/stdc++.h>
using namespace std;
string removeSpaceString(string str){


    stringstream s;
   /// Storing the whole string into string stream
    s<<str;

    string word;
    str="";
    ///  Extracting word by word from stream
    while(s>>word){

           str+=word;

    }


    return str;


}

int main()
{

    string s = "geeks for geeks geeks "
               "contribution placements";
    cout << "Number of words are: " << removeSpaceString(s)<<endl;;
    return 0;
}

