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
        string s;
        cin >> s;
        int cap[26] = {0};
        int small[26] = {0};
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 'a' and s[i] <= 'z')
            {
                small[s[i] - 'a']++;
            }
            else
            {
                cap[s[i] - 'A']++;
            }
        }
        int ans = 0;

        for (int i = 0; i < 26 and k >= 0; i++)
        {
            int diff = abs(cap[i] - small[i]);
            int cnt = diff / 2;
            if (cnt <= k)
            {
                k -= cnt;
                ans += cnt;
            }
            else
            {
                ans += k ;
                k = 0;
            }
            ans += min(cap[i], small[i]);
        }

        cout << ans << "\n";
    }
}