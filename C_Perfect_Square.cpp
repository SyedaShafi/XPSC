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
        char a[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        int ans = 0;
        int k = n - 1;
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] != a[k][j])
                {
                    int e1 = a[i][j] - 'a';
                    int e2 = a[k][j] - 'a';
                    ans += (abs(e1 - e2));
                    if (a[i][j] > a[k][j])
                        a[k][j] = a[i][j];
                    else
                        a[i][j] = a[k][j];
                }
            }
            k--;
        }
        for (int i = 0; i < n; i++)
        {
            k = n - 1;
            for (int j = 0; j < n / 2; j++)
            {
                if (a[i][j] != a[i][k])
                {
                    int e1 = a[i][j] - 'a';
                    int e2 = a[i][k] - 'a';
                    ans += (abs(e1 - e2));
                    if (a[i][j] > a[i][k])
                        a[i][k] = a[i][j];
                    else
                        a[i][j] = a[i][k];
                }
                k--;
            }
        }
        cout << ans << "\n";
    }
}