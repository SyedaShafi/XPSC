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
        bool f = false;
        int a[26] = {0}, b[26] = {0};
        a['i' - 'a'] = 1;
        a['m' - 'a'] = 1;
        a['u' - 'a'] = 1;
        a['r' - 'a'] = 1;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'T')
            {
                cnt++;
                f = true;
            }
            if (cnt > 1)
            {
                f = false;
                break;
            }
        }
        if (f)
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'T')
                    continue;
                if (s[i] >= 'A' and s[i] <= 'Z')
                {
                    f = false;
                    break;
                }
                b[s[i] - 'a']++;
            }
            if (f)
            {
                for (int i = 0; i < 26; i++)
                {
                    if (a[i] != b[i])
                    {
                        f = false;
                        break;
                    }
                }
            }
        }

        if (f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}