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
        vector<string> v1;
        vector<string> v2;
        vector<string> v3;
        string s;
        map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            v1.push_back(s);
            mp[s]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            v2.push_back(s);
            mp[s]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            v3.push_back(s);
            mp[s]++;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (mp[v1[i]] == 2)
                ans += 1;
            else if (mp[v1[i]] == 1)
                ans += 3;
        }
        cout << ans << " ";
        ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (mp[v2[i]] == 2)
                ans += 1;
            else if (mp[v2[i]] == 1)
                ans += 3;
        }
        cout << ans << " ";
        ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (mp[v3[i]] == 2)
                ans += 1;
            else if (mp[v3[i]] == 1)
                ans += 3;
        }
        cout << ans << "\n";
    }
}