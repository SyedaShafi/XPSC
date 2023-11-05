#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll N = 1e10 + 1;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        ll l = 0, r = N, ans;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            ll tmp = 0;
            for (int i = 0; i < n; i++)
            {
                if (v[i] < mid)
                {
                    tmp += (mid - v[i]);
                }
            }
            if (tmp <= x)
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << "\n";
    }
}