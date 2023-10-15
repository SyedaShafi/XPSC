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
        string tmp = "Timur";
        sort(tmp.begin(), tmp.end());
        sort(s.begin(), s.end());
        if (tmp == s)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}