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
        ll tmp = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                tmp += i;
            else
                tmp += (n - i - 1);
        }
        // cout << tmp << "\n";
        vector<ll> v;
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] == 'L')
            {
                v.push_back((n - i - 1) - i);
            }
        }
        for (int i = n / 2; i < n; i++)
        {
            if (s[i] == 'R')
            {
                v.push_back(i - (n - i - 1));
            }
        }
        if (v.size() > 0)
            sort(v.begin(), v.end(), greater<ll>());
        for (int i = 0; i < n; i++)
        {
            if (v.size() > i and v[i] > 0)
                tmp += v[i];
            cout << tmp << " ";
        }
        cout << "\n";
    }
}