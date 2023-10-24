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
        ll n, m;
        cin >> n >> m;
        vector<ll> v;
        ll tmp = m, cnt = 1;
        while (tmp <= n and cnt < 10)
        {
            v.push_back(tmp % 10);
            cnt++;
            tmp = cnt * m;
        }
        ll ans = 0;
        for (auto ele : v)
        {
            ans += ele;
        }
        ll total_cnt = n / m;
        if (total_cnt <= 10)
        {
            cout << ans << "\n";
        }
        else
        {
            ll rem = total_cnt % 10;
            ll t = ans;
            ans = (total_cnt / 10) * t;
            for (int i = 0; i < rem; i++)
            {
                ans += v[i];
            }
            cout << ans << "\n";
        }
    }
}