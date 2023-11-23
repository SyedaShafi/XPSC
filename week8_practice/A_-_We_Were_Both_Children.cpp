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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = 0;
        vector<int> frq(n + 2, 0);
        for (int i = 0; i < n; i++)
        {
            if (a[i] > n)
                continue;
            else
            {
                frq[a[i]]++;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            ll tmp = 0;
            for (int x = 1; x * x <= i; x++)
            {
                if (i % x == 0)
                {
                    tmp += frq[x];
                    if (i / x != x)
                    {
                        tmp += frq[i / x];
                    }
                }
            }
            ans = max(ans, tmp);
        }
        cout << ans << "\n";
    }
}