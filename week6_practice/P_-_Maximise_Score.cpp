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
        {
            cin >> a[i];
        }
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int tmp = 0;
            if (i + 1 < n)
            {
                tmp = max(tmp, abs(a[i] - a[i + 1]));
            }
            if (i - 1 >= 0)
            {
                tmp = max(tmp, abs(a[i] - a[i - 1]));
            }
            mn = min(tmp, mn);
        }
        cout << mn << "\n";
    }
}