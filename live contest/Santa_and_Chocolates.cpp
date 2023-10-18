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
        int a[n];
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum < n)
            cout << "NO\n";
        else if (sum % n != 0 and k == 0)
        {
            cout << "NO\n";
        }
        else
            cout << "YES\n";
    }
}