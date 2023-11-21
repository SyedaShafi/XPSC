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
        int n, k;
        cin >> n >> k;
        int fr[n], h[n];
        for (int i = 0; i < n; i++)
            cin >> fr[i];

        for (int i = 0; i < n; i++)
            cin >> h[i];

        int l = 0, r = 1;
        int mx = 0;
        ll sum = fr[0];
        for (auto ele : fr)
        {
            if (ele <= k)
                mx = 1;
        }

        while (r < n)
        {
            if (sum + fr[r] <= k and (h[r - 1] % h[r]) == 0)
            {
                sum += fr[r];
            }
            else
            {
                mx = max(mx, (r - l));
                sum = fr[r];
                l = r;
            }
            r++;
        }
        mx = max(mx, r - l);
        cout << mx << "\n";
    }
}