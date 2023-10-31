#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                even++;
        }
        ll res = 1;
        for (int i = 0; i < even; i++)
        {
            res = (res * 2) % N;
        }
        if (even == n)
            res--;
        cout << res << "\n";
    }
}