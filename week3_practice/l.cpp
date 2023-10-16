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
        map<string, bool> mp;
        for (int i = 0; i < n - 1; i++)
        {
            string tmp = "";
            tmp += s[i];
            tmp += s[i + 1];
            // cout << tmp << "\n";
            if (mp[tmp] == false)
            {
                mp[tmp] = true;
            }
        }
        cout << mp.size() << "\n";
    }
}