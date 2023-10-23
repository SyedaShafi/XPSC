#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    ll a[n], b[n];
    ll x = 1;
    ll ans = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    for (int i = n - 2; i >= 0; i--)
    {
        ans += ((b[i] * x) + 1);
        x++;
    }
    cout << ans << "\n";
    vector<int> order;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[i] == a[j])
            {
                order.push_back(j + 1);
                a[j] = -1;
            }
        }
    }
    for (int ele : order)
    {
        cout << ele << " ";
    }
}