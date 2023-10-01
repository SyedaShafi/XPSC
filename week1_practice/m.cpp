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
        string s;
        cin >> s;
        int a[26] = {0};
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[s[i] - 'A'] == 0)
            {
                ans += 2;
                a[s[i] - 'A']++;
            }
            else
                ans++;
        }
        cout << ans << "\n";
    }
}