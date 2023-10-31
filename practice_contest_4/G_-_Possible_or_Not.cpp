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
        int n, b;
        cin >> n >> b;
        int a[n];
        int cnt = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if ((a[i] & b) == b)
            {
                cnt = (cnt & a[i]);
            }
        }
        if (cnt == b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}