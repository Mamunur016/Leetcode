#include <bits/stdc++.h>
using namespace std;

void towerOfHonoi(int n, string src, string hepler, string des)
{

    if (n == 1)
    {
        cout << "Transfer disk " << n << " from " << src << " to  " << des << endl;
        return;
    }

    towerOfHonoi(n - 1, src, des, hepler);
    cout << "Transfer disk " << n << " from " << src << " to  " << des << endl;
    towerOfHonoi(n - 1, hepler, src, des);
}

int main()
{
    int n;
    cin >> n;
    towerOfHonoi(n, "S", "H", "D");
    return 0;
}