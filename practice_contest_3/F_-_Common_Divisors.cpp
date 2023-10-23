#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    ll a[n];
    ll gcd = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        gcd = __gcd(gcd, a[i]);
    }
    ll cnt = 0;
    for (ll i = 1; i * i <= gcd; i++)
    {
        if (gcd % i == 0)
        {
            cnt++;
            if ((gcd / i) != i)
                cnt++;
        }
    }
    cout << cnt << "\n";
}