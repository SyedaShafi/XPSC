#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e5 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, h;
        cin >> n >> h;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int l = 0, r = N;
        int ans;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            int hh = h;
            for (int i = 0; i < n; i++)
            {
                if (a[i] > mid and hh > 0)
                {
                    hh -= a[i];
                }
            }
            if (hh > 0)
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << "\n";
    }
}