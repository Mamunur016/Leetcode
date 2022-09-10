#include<bits/stdc++.h>
using namespace std;

void printPascal(int n){

    vector<vector<int>>arr;


    vector<int>ans;

    for(int line=0;line<n;++line){

            vector<int>row(line+1,1);

        for(int i=1;i<line;++i){

            row[i]=arr[line-1][i]+arr[line-1][i-1];

        }

        arr.push_back(row);
    }
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

}
int main()
{

    int n;
    cin>>n;

    printPascal(n);
}
