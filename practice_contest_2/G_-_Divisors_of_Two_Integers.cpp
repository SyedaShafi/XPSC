#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e4 + 7;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int freq[N] = {0};
    int vis[N] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }
    sort(a, a + n);
    ll ans1 = a[n - 1];
    int ans2 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (vis[a[i]] == 0 and (ans1 % a[i] == 0))
        {
            vis[a[i]] = 1;
        }
    }

    for (int i = n - 2; i >= 0; i--)
    {
        if (!vis[a[i]])
        {
            ans2 = max(a[i], ans2);
        }
        else if (vis[a[i]] and freq[a[i]] > 1)
        {
            ans2 = max(a[i], ans2);
        }
    }

    cout << ans1 << " " << ans2 << "\n";
}