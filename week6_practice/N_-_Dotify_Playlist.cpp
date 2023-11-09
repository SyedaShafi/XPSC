
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
        int n, k, l;
        cin >> n >> k >> l;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int m, L;
            cin >> m >> L;
            if (L == l)
            {
                v.push_back(m);
            }
        }
        if (v.size() < k)
            cout << -1 << "\n";
        else
        {
            sort(v.rbegin(), v.rend());
            ll sum = 0;
            for (int i = 0; i < k; i++)
            {
                sum += v[i];
            }
            cout << sum << "\n";
        }
    }
}