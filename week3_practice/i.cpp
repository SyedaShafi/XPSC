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
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        sort(v.begin(), v.end());
        int ans = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (mp[v[i]])
            {
                cnt++;
                int tmp = v[i];
                while (mp[tmp])
                {
                    mp[tmp]--;
                    tmp++;
                }
            }
        }
        cout << cnt << "\n";
    }
}