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
        int L, v, l, r;
        cin >> L >> v >> l >> r;
        int ans = (L / v);
        int t1 = r / v;
        int t2 = (l - 1) / v;
        cout << ans - abs(t1 - t2) << "\n";
    }
}