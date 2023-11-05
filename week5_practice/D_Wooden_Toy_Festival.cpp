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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int l = 0, r = INT_MAX;
        sort(a.rbegin(), a.rend());
        int ans;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            int w = 1;
            int tmp = abs(a[0] - mid);
            for (int i = 1; i < n; i++)
            {
                if (abs(a[i] - tmp) > mid)
                {
                    tmp = (a[i] - mid);
                    w++;
                }
            }
            if (w <= 3)
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