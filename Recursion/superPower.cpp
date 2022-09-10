#include <bits/stdc++.h>
using namespace std;
int binaryExponentiation(int a, int b, int m)
{

    if (b == 0)
    {
        return 1;
    }
    long res = binaryExponentiation(a, b / 2, m);

    if (b & 1) /// b is odd
    {
        return a * (res * res) % m;
    }
    else
    {
        return (res * res) % m;
    }
}
int main()
{
    vector<int> b = {1, 0};
    int bmod = 0, a = 2;

    for (auto val : b)
    {

        bmod = (bmod * 10 + val) % 1140;
    }

    int ans = binaryExponentiation(a, bmod, 1337);
    cout << ans << endl;
    return 0;
}