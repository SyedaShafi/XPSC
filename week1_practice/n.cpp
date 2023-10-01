#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    string s;
    cin >> s;
    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (i % 2 == 0)
            ans += s[i];
    }
    cout << ans << "\n";
}