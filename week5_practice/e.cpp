#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll N = (2 * 1e18) + 1LL * 10;
ll digit_sum(ll num)
{
    ll res = 0;
    while (num != 0)
    {
        res += num % 10;
        num /= 10;
    }
    return res;
}
int main()
{
    ll n, s;
    cin >> n >> s;
    ll l = 0, r = n;
    ll mid = 0;
    ll min_number = N;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if ((mid - digit_sum(mid)) >= s)
        {
            min_number = min(min_number, mid);
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    // cout << N << "\n";
    // cout << min_number << "\n";
    if (min_number == N)
        cout << 0 << "\n";
    else
        cout << n - min_number + 1 << "\n";
}