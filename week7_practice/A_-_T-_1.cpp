#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
ll lcm_cal(ll a, ll b)
{
    ll res = ((a * b) / __gcd(a, b));
    return res;
}
int main()
{
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll div_a = (n / a);
    ll div_b = (n / b);
    ll l = lcm_cal(a, b);
    ll div_ab = (n / l);
    div_a -= div_ab;
    div_b -= div_ab;

    ll res = (div_a * p) + (div_b * q);
    res += (div_ab * (max(p, q)));

    cout << res << "\n";
}