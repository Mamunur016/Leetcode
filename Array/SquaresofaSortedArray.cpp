#include<bits/stdc++.h>
using namespace std;
int main()

{

    int nums[]={-2,4,0,45,6};
    vector<int> v;
    for(const int n:nums){
       v.push_back(n*n);
    }
   sort(v.begin(), v.end());
   v.insert(v.begin()+3, 5);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}
