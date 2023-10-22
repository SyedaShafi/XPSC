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
        int n, index = -1;
        char ch;
        cin >> n >> ch;
        string s;
        cin >> s;
        s += s;
        int ans = INT_MIN;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ch and index == -1)
                index = i;
            if (s[i] == 'g' and index > -1)
            {
                ans = max(ans, i - index);
                index = -1;
            }
        }
        cout << ans << "\n";
    }
}