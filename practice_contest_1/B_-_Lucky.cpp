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
        string s;
        cin >> s;
        int ans1 = 0, ans2 = 0;
        for (int i = 0; i < 3; i++)
        {
            ans1 += (s[i] - '0');
        }
        for (int i = 3; i < 6; i++)
        {
            ans2 += (s[i] - '0');
        }
        if (ans1 == ans2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}