#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }

    string ans = "";

    for (int i = n - 1; i >= 0; i--)
    {
        int sz = v[i].size();
        
        if (mp[v[i]] > 0)
        {
            string tmp = v[i];
            ans = ans + tmp[sz - 2] + tmp[sz - 1];
            mp[v[i]] = 0;
        }
    }
    cout << ans << "\n";
}