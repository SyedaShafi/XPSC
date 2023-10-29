#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e6 + 7;
int sum = 0;
int n, m;
int a[N];
bool can_fill(int capacity)
{
    int k = 0, tmp = 0;
    for (int i = 0; i < n; i++)
    {
        if (tmp + a[i] > capacity)
            tmp = 0;
        if (tmp == 0)
            k++;
        tmp += a[i];
    }
    return k <= m;
}
int main()
{
    while (cin >> n >> m)
    {
        int max_val = 0;
        int res = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            max_val = max(max_val, a[i]);
            sum += a[i];
        }
        if (m >= n)
            res = max_val;
        else
        {
            int l = max_val;
            int h = sum;
            int mid;
            while (l <= h)
            {
                mid = l + (h - l) / 2;
                // cout << mid << "\n";
                if (can_fill(mid))
                {
                    // cout << mid << "\n";
                    res = min(res, mid);
                    h = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
        }
        cout << res << "\n";
    }
}