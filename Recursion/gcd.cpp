#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{

    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int main()
{

    cout << gcd(12, 4) << endl;
    cout << gcd(12, 18) << endl;
    cout << gcd(18, 4) << endl;

    // built in gcd function
    cout << __gcd(18, 12) << endl;
    // for a,b,c
    cout << __gcd(18, __gcd(12, 4)) << endl;

    // calculate lcm
    cout << (18 * 12) / gcd(18, 12) << endl;

    return 0;
}