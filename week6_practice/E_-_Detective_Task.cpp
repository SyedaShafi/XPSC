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
        string s;
        cin >> s;
        int n = s.size();
        int l = n-1, r = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                l = i;
                break;
            }
        }
        for (int i = l; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                r = i;
                break;
            }
        }
        // cout << l << " " << r << "\n";
        cout << l - r + 1 << "\n";
    }
}