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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        // sort(a, a + n);
        ll presum[n + 2] = {0};
        for (int i = 0; i < n; i++)
        {
            presum[i + 1] = presum[i] + a[i];
        }
        ll mx = INT_MIN;
        ll mxx = -1;
        ll mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (mxx < a[i])
                mxx = a[i];
            if (mn > a[i])
                mn = a[i];
        }
        mx = mxx - mn;
        // cout << mxx << " " << mn << " " << mx << "\n";
        // for (int i = 0; i <= n; i++)
        //     cout << presum[i] << " ";
        // cout << "\n";
        for (int i = 2; i < n; i++)
        {
            ll tmp = 0;
            if (n % i == 0)
            {
                // cout << "\n\n";
                mxx = INT_MIN, mn = INT_MAX;
                for (int j = 0; j < n; j += i)
                {
                    tmp = (presum[j + i] - presum[j]);
                    // cout << tmp << "\n";
                    if (tmp > mxx)
                        mxx = tmp;
                    if (tmp < mn)
                        mn = tmp;
                }
                // cout << mxx << " " << mn << "\n";
                mx = max(mx, (mxx - mn));
            }
        }
        cout << mx << "\n";
    }
}