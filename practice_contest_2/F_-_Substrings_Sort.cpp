#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
bool cmp(string a, string b)
{
    if (a.size() == b.size())
        return a < b;
    return a.size() < b.size();
}
int substring(string s1, string s2)
{
    if (s2.find(s1) != string::npos)
        return s2.find(s1);
    return -1;
}
int main()
{
    int n;
    cin >> n;
    vector<string> v;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end(), cmp);
    bool flag = true;
    for (int i = 1; i < n; i++)
    {
        int ans = substring(v[i - 1], v[i]);
        if (ans == -1)
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "YES\n";
        for (int i = 0; i < n; i++)
            cout << v[i] << "\n";
    }
    else
        cout << "NO\n";
}