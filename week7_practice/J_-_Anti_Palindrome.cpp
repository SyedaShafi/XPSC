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
        int f[26] = {0};
        for (int i = 0; i < n; i++)
        {
            f[s[i] - 'a']++;
        }
        int odd_cnt = 0, chars = 0;
        for (int i = 0; i < 26; i++)
        {
            if (f[i] > 0)
                chars++;
            if (f[i] % 2 != 0)
                odd_cnt++;
        }
        if (odd_cnt > 1)
            cout << 0 << "\n";
        else if (odd_cnt == 0)
            cout << 1 << "\n";
        else if (odd_cnt == 1 and chars > 1)
            cout << 1 << "\n";
        else
            cout << "2\n";
    }
}