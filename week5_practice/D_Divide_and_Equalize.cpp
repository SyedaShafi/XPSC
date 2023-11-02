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
        int l = 0, r = INT_MAX;
        bool flag = false;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            double sum = 1.0;
            for (int i = 0; i < n; i++)
            {
                sum *= (a[i] * 1.0 / mid);
            }
            if (fabs(sum - 1.0) <= 1e-15)
            {
                flag = true;
                break;
            }
            else if (sum > 1.0)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}