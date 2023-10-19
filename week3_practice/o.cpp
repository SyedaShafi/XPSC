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
        int cnt = 0;
        for (int i = 0; i < n - 2; i++)
        {
            if (s[i] == s[i + 2])
                cnt++;
        }
        cout << n - 1 - cnt << "\n";
    }
}