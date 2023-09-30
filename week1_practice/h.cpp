#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int arr[2 + 1];
    arr[0] = a;
    arr[1] = b;
    bool dp[2 + 1][c + 1];
    dp[0][0] = true;
    for (int i = 1; i <= c; i++)
    {
        dp[0][i] = false;
    }
    for (int i = 1; i <= 2; i++)
    {
        for (int j = 0; j <= c; j++)
        {
            if (arr[i - 1] <= j)
            {
                dp[i][j] = dp[i][j - arr[i - 1]] || dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    if (dp[2][c])
        cout << "Yes\n";
    else
        cout << "No\n";
}