#include<bits/stdc++.h>
using namespace std;
int main()

{

    vector<vector<int>> matrix={{1,2,3},{4,5,6}};

        vector<int> res;
        map<int, vector<int>> mp;

        for(int i = 0 ; i < matrix.size() ; i++)
            for(int j = 0 ; j < matrix[0].size() ; j++)
                mp[i + j].push_back(matrix[i][j]);

        for(auto i : mp) {
            if((i.first)%2 == 0)
                reverse(i.second.begin(), i.second.end());

            for(auto k : i.second) res.push_back(k);
        }

        for(int i:res){
            cout<<i<<" ";
        }

}
