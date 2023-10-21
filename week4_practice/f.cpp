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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        string s;
        cin >> s;
        vector<set<int>> v(26);
        bool vis[55] = {0};
        for (int i = 0; i < n; i++)
        {
            v[s[i] - 'a'].insert(a[i]);
        }
        bool flag = true;
        for (int i = 0; i < 26; i++)
        {
            for (auto ele : v[i])
            {
                if (!vis[ele])
                {
                    vis[ele] = true;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            if (!flag)
            {
                break;
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}