#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        ll ans = 1;
        if (n >= k)
        {
            ll tmp2 = k;
            ll tmp = (n - k);
            while (tmp2 > 0)
            {
                ans = (ans * tmp2) % N;
                tmp2--;
            }

            while (tmp > 0)
            {
                ans = (ans * k) % N;
                tmp--;
            }
        }
        else
        {
            ll tmp = n;
            while (tmp > 0)
            {
                ans = (ans * k) % N;
                tmp--;
            }
        }
        cout << ans << "\n";
    }
}