#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
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
        ll total = 0;
        ll fr[31] = {0};
        ll cnt = 0;
        for (int j = 0; j < n; j++)
        {
            cnt = 0;
            while (a[j] != 0)
            {
                a[j] /= 2;
                cnt++;
            }
            fr[cnt]++;
        }

        for (int i = 0; i < 31; i++)
        {
            total += (fr[i] * (fr[i] - 1) / 2);
        }
        cout << total << "\n";
    }
}