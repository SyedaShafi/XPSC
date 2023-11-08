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
        string s1, s2;
        int c1 = 0, c2 = 0;
        cin >> s1 >> s2;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == 'R' and s2[i] == 'S')
            {
                c1++;
            }
            else if (s1[i] == 'R' and s2[i] == 'P')
            {
                c2++;
            }
            else if (s1[i] == 'P' and s2[i] == 'R')
            {
                c1++;
            }
            else if (s1[i] == 'P' and s2[i] == 'S')
            {
                c2++;
            }
            else if (s1[i] == 'S' and s2[i] == 'R')
            {
                c2++;
            }
            else if (s1[i] == 'S' and s2[i] == 'P')
            {
                c1++;
            }
        }
        // cout << c1 << " " << c2 << "\n";
        if (c1 < c2)
        {
            int cnt = 0;
            while (c1 <= c2)
            {
                c1++, c2--;
                cnt++;
            }
            cout << cnt << "\n";
        }
        else if (c1 == c2)
            cout << 1 << "\n";

        else
            cout << 0 << "\n";
    }
}