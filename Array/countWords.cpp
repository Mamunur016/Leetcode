#include<bits/stdc++.h>
using namespace std;
int countWords(string str){

    stringstream s;

    s<<str;

   int count=0;

    string word;

    while(s>>word){
            cout<<word<<" ";
        ++count;
    }
    cout<<endl;
    return count;

}

int main()
{

    string s = "geeks for geeks geeks "
               "contribution placements";
    cout << "Number of words are: " << countWords(s)<<endl;;
    return 0;
}
