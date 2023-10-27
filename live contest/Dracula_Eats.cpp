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
        int ans = 0;
        if (n > 1)
        {
            ans++;
            n -= 2;
            ans += (n / 7);
        }
        cout << ans << "\n";
    }
}