#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, dist = 1;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] != a[i + 1])
                dist++;
        }

        int diff = n - dist;
        if (diff % 2 != 0)
            cout << dist - 1 << endl;
        else
            cout << dist << endl;
    }
}