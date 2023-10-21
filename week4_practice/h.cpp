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
        vector<int> g_index;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'g')
                g_index.push_back(i);
            if (s[i] == ch)
                index = i;
        }
        int sz = g_index.size();
        int ans = INT_MAX;
        // for (auto ele : g_index)
        // {
        //     cout << ele << " ";
        // }
        // cout << " \nindex " << index
        //      << "\n";
        if (index < g_index[sz - 1])
        {
            for (int i = 0; i < sz; i++)
            {
                if (g_index[i] < index)
                    continue;
                ans = g_index[i] - index;
                break;
            }
        }
        else
        {
            ans = n - index + g_index[0];
        }
        cout << ans << "\n";
    }
}