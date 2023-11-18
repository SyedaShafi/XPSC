#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        // cout << __gcd(a, b) << "\n";
        ll gcd = __gcd(a, b);
        while (b > 1 and gcd > 1)
        {
            cout << b << " " << gcd << "\n";
            b /= gcd;
            gcd = __gcd(a, b);
        }
        if (b > 1)
            cout << "No\n";
        else
            cout << "Yes\n";
    }
}