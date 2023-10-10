#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int t;
    cin >> t;
    int a[t];
    map<int, int> mp;
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    int ans = -1;
    for (auto ele : mp)
    {
        if (ele.second == 1)
        {
            ans = ele.first;
            break;
        }
    }
    cout << ans << "\n";
}