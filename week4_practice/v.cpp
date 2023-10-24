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
        int n, k;
        cin >> n >> k;
        map<int, vector<int>> mp;
        int ele;
        for (int i = 1; i <= n; i++)
        {
            cin >> ele;
            mp[ele].push_back(i);
        }

        while (k--)
        {
            int a, b;
            cin >> a >> b;
            bool flag = false;
            if (mp[a].size() > 0 and mp[b].size() > 0)
            {
                int l = mp[a][0];
                int r = mp[b][mp[b].size() - 1];
                if (r - l >= 0)
                    flag = true;
            }
            if (flag)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}