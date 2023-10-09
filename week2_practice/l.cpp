#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    ll a[n];
    ll sum1[n + 2] = {0}, sum2[n + 2] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum1[i + 1] = sum1[i] + a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
        sum2[i + 1] = sum2[i] + a[i];

    int m;
    cin >> m;
    while (m--)
    {
        int t, l, r;
        cin >> t >> l >> r;
        if (t == 1)
        {
            cout << sum1[r] - sum1[l - 1] << "\n";
        }
        else
        {
            cout << sum2[r] - sum2[l - 1] << "\n";
        }
    }
}