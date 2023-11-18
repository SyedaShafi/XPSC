#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> divs;
    divs.push_back(1);
    if (n != 1)
        divs.push_back(n);
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divs.push_back(i);
            if (n / i != i)
            {
                divs.push_back((n / i));
            }
        }
    }
    sort(divs.begin(), divs.end());
    // cout << divs.size() << " " << divs[divs.size() - 1] << "\n";
    if (k > divs.size())
        cout << -1 << "\n";
    else
        cout << divs[k - 1] << "\n";
}