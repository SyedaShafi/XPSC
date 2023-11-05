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
        string s, t;
        ll ans = 1;
        cin >> s >> t;
        if (t == "a")
            ans = 1;
        else if (find(t.begin(), t.end(), 'a') != t.end())
        {
            ans = -1;
        }
        else
        {
            for (int i = 0; i < s.size(); i++)
            {
                ans *= 2;
            }
        }
        cout << ans << "\n";
    }
}