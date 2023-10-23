#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int op = 0;
    string ans = "";
    for (int i = 0; i < n - 1; i += 2)
    {
        string tmp = "";

        tmp = s.substr(i, 2);
        // cout << tmp << "\n";
        if (tmp != "ab" and tmp != "ba")
        {
            op++;
            ans += "ab";
        }
        else
        {
            ans += tmp;
        }
    }
    cout << op << "\n";
    cout << ans << "\n";
}