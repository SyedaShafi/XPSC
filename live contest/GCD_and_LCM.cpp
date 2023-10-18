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
        ll x, y, k;
        cin >> x >> y >> k;

        for (int i = 1; i <= k; i++)
        {
            ll tmp1 = __gcd(x, y);
            ll res1 = (tmp1 * y) / __gcd(tmp1, y);
            ll res2 = (tmp1 * x) / __gcd(tmp1, x);
            if (res1 < res2)
            {
                x = tmp1;
            }
            else
            {
                y = tmp1;
            }

            ll tmp2 = ((x * y) / __gcd(x, y));
            res1 = __gcd(x, tmp2);
            res2 = __gcd(y, tmp2);
            if (res1 < res2)
            {
                y = tmp2;
            }
            else
            {
                x = tmp2;
            }
            if (tmp1 == tmp2)
                break;
        }
        cout << x + y << "\n";
    }
}