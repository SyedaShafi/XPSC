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
        cin >> s1 >> s2;
        int r1 = 0, r2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == 'R')
                r1++;
        }
        for (int i = 0; i < n; i++)
        {
            if (s2[i] == 'R')
                r2++;
        }
        if (r1 != r2)
            cout << "NO\n";
        else
        {
            bool flag = true;
            for (int i = 0; i < n; i++)
            {
                if ((s1[i] == 'R' and s2[i] != 'R') || (s1[i] != 'R' and s2[i] == 'R'))
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}