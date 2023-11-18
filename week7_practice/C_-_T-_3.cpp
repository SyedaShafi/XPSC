#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    ll l, r;
    cin >> l >> r;
    cout << "YES\n";
    for (ll i = l; i < r; i += 2)
    {
        cout << i << " " << i + 1 << "\n";
    }
}