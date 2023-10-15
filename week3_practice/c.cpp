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
        string s[n];
        map<string, bool> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            mp[s[i]] = true;
        }
        int a[n] = {0};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < s[i].size(); j++)
            {
                string pre = s[i].substr(0, j);
                string aft = s[i].substr(j, s[i].size());
                if (mp[pre] and mp[aft])
                {
                    a[i] = 1;
                    break;
                }
            }
        }
        for (int ele : a)
        {
            cout << ele;
        }
        cout << "\n";
    }
}