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
        bool ans = true;
        int r = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R')
                r = 1;
            else if (s[i] == 'B')
                b = 1;
            else if (s[i] == 'W')
            {

                if (r != b)
                {
                    ans = false;
                    break;
                }
                else
                {
                    r = 0, b = 0;
                }
            }
        }
        if (r != b)
            ans = false;
        if (ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}