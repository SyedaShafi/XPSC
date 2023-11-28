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
        int n, x;
        cin >> n >> x;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        if ((2 * x) <= n)
            cout << "YES\n";
        else
        {
            bool flag = true;
            int tmp = n - x;
            sort(b, b + n);
            for (int i = tmp; i < x; i++)
            {
                if (a[i] != b[i])
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}