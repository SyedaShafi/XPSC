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
        ll m[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cin >> m[i][j];
        }

        ll ans[n];
        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    continue;

                if (m[i][j] != (ans[i] | ans[j]))
                {
                    flag = false;
                    break;
                }
            }
            if (flag == false)
                break;
        }

        if (flag)
        {
            cout << "YES\n";
            for (int i = 0; i < n; i++)
            {
                cout << ans[i] << " ";
            }
            cout << "\n";
        }
        else
            cout << "NO\n";
    }
}