#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int l = 0, r = INT_MAX;
    int ans;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > mid)
            {
                sum += (a[i] - mid);
            }
        }
        if (sum >= m)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << "\n";
}