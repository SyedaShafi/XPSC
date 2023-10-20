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
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            res ^= a[i];
        }
        if (res == 0)
        {
            cout << 0 << "\n";
        }
        else
        {
            if (n % 2 != 0 and res < 256)
            {
                cout << res << "\n";
            }
            else
                cout << -1 << "\n";
        }
    }
}