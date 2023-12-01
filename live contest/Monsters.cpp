#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e6;
bool is_prime[N + 1];
void primes()
{
    memset(is_prime, true, sizeof(is_prime));
    is_prime[0] = is_prime[1] = false;
    for (ll p = 2; p * p <= N; p++)
    {
        if (is_prime[p])
        {
            for (ll i = p * p; i <= N; i += p)
            {
                is_prime[i] = false;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    primes();
    while (t--)
    {
        ll h;
        cin >> h;
        ll cnt = 0;
        ll power = 1;
        while (h > 0)
        {
            if (is_prime[h])
            {
                h = 0;
                cnt++;
                break;
            }
            else
            {
                h -= power;
                power *= 2;
                cnt++;
            }
        }
        if (h != 0)
            cout << -1 << "\n";
        else
            cout << cnt << "\n";
    }
}