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
        int n, m, ans = INT_MAX;
        cin >> n >> m;
        vector<string> v;
        string s;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            v.push_back(s);
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                string t1, t2;
                t1 = v[i], t2 = v[j];
                int tmp = 0;
                for (int k = 0; k < m; k++)
                {
                    tmp += abs((t1[k] - 'a') - (t2[k] - 'a'));
                }
                ans = min(ans, tmp);
            }
        }
        cout << ans << "\n";
    }
}