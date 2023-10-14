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
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = 0; j < n / 2; j++)
            {
                vector<int> res;
                res.push_back(a[i][j] - 'a');
                res.push_back(a[j][n - 1 - i] - 'a');
                res.push_back(a[n - 1 - i][n - 1 - j] - 'a');
                res.push_back(a[n - 1 - j][i] - 'a');
                sort(res.begin(), res.end());
                for (int k = 0; k < 3; k++)
                {
                    ans += (res[3] - res[k]);
                }
            }
        }
        cout << ans << "\n";
    }
}