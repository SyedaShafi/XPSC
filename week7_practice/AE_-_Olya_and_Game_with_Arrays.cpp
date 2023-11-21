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
        vector<int> mn, sm;

        while (n--)
        {
            int m;
            cin >> m;
            int a[m];
            for (int i = 0; i < m; i++)
            {
                cin >> a[i];
            }
            sort(a, a + m);
            mn.push_back(a[0]);
            sm.push_back(a[1]);
        }

        sort(mn.begin(), mn.end());
        sort(sm.begin(), sm.end());

        ll sum = 0;
        for (int i = 1; i < sm.size(); i++)
        {
            sum += sm[i];
        }

        if (mn.size() > 0)
        {
            sum += mn[0];
        }

        cout << sum << "\n";
    }
}