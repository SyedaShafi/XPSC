#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int mask = (1 << n);
    int total = 0;
    bool f = false;

    for (int i = 0; i < (1 << n); i++)
    {
        total = 0;
        for (int j = 0; j < n; j++)
        {
            if ((i & (1 << j)) == 0)
            {
                total += a[j];
            }
            else
            {
                total -= a[j];
            }
        }
        // cout << total << "\n";
        if (total % 360 == 0)
        {
            f = true;
            break;
        }
    }

    if (f)
        cout << "YES\n";
    else
        cout << "NO\n";
}