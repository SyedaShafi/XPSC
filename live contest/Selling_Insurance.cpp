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
        int n, cnt = 0, ans = 0;
        cin >> n;
        cnt = ((100 * 100) / (n * 20));
        ans = cnt * ((n * 20) / 100.0);
        if (ans < 100)
            cnt++;
        // cout << ans << "\n";
        cout << cnt << "\n";
    }
}