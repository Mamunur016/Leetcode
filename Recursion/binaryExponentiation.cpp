#include <bits/stdc++.h>
using namespace std;

int binaryExponentiation(int a, int b)
{

    if (b == 0)
    {
        return 1;
    }
    long res = binaryExponentiation(a, b / 2);

    if (b & 1) /// b is odd
    {
        return a * res * res;
    }
    else
    {
        return res * res;
    }
}
int main()
{

    cout << binaryExponentiation(2, 13) << endl;
    return 0;
}