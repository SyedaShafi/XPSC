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
    map<string, int> mp;
    for (int i = 0; i < n - 1; i++)
    {
        string tmp = " ";
        tmp.push_back(s[i]);
        tmp.push_back(s[i + 1]);
        mp[tmp]++;
    }

    int ans = INT_MIN;
    string res = "";
    for (auto ele : mp)
    {
        if (ele.second > ans)
        {
            ans = ele.second;
            res = ele.first;
        }
    }
    cout << res << "\n";
}