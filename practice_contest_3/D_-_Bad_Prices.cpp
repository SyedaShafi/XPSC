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
        int ans = 0;
        int tmp = a[n - 1];
        for (int i = n - 1; i >= 0; i--)
        {
            if (tmp < a[i])
                ans++;
            else
                tmp = a[i];
        }

        cout << ans << "\n";
    }
}