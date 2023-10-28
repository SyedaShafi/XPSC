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
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n);
        ll tmp = a[n - 1];
        ll cnt = 1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (tmp >= a[i])
                tmp ^= a[i];
            else
            {
                tmp = a[i];
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
}