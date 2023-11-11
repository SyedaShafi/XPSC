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
        ll tmp_k = k;
        ll tmp_n = n;
        if (n <= k)
        {
            while (tmp_n--)
            {
                ans = ((ans % N) * (tmp_k % N)) % N;
                tmp_k--;
            }
        }
        else
        {

            while (tmp_n > 0)
            {
                if (k == 0)
                    break;
                ans = ((ans % N) * (k % N)) % N;
                tmp_n--;
                k--;
            }
        }

        cout << ans << "\n";
    }
}