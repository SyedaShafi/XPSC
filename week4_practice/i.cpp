#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}
int main()
{
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
        int cnt = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            while (a[i] > 0 and a[i] % 2 == 0)
            {
                a[i] /= 2;
                cnt++;
            }
            ans += cnt;
            cnt = 0;
        }
        // cout << ans << "\n";
        if (ans >= n)
            cout << 0 << "\n";
        else
        {
            cnt = 0;
            int op = 0;
            vector<pair<int, int>> v;
            for (int i = n; i >= 1; i--)
            {
                int tmp = i;
                while (tmp > 0 and tmp % 2 == 0)
                {
                    tmp /= 2;
                    cnt++;
                }
                if (cnt > 0)
                    v.push_back({i, cnt});
                cnt = 0;
            }
            sort(v.begin(), v.end(), cmp);

            for (auto ele : v)
            {
                ans += ele.second;
                if (ans < n)
                    op++;
                else if (ans >= n)
                {
                    op++;
                    break;
                }
            }
            if (ans < n)
                op = -1;
            cout << op << "\n";
        }
    }
}