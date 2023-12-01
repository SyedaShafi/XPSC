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
        int k;
        cin >> k;
        vector<int> mn, sm;
        while (k--)
        {
            int n;
            cin >> n;
            int a[n];
            for (int i = 0; i < n; i++)
            {
                cin >> a[i];
            }
            sort(a, a + n);
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
        sum += mn[0];
        cout << sum << "\n";
    }
}